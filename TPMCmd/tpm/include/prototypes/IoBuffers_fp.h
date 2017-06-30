/* Microsoft Reference Implementation for TPM 2.0
 *
 *  The copyright in this software is being made available under the BSD License,
 *  included below. This software may be subject to other third party and
 *  contributor rights, including patent rights, and no such rights are granted
 *  under this license.
 *
 *  Copyright (c) Microsoft Corporation
 *
 *  All rights reserved.
 *
 *  BSD License
 *
 *  Redistribution and use in source and binary forms, with or without modification,
 *  are permitted provided that the following conditions are met:
 *
 *  Redistributions of source code must retain the above copyright notice, this list
 *  of conditions and the following disclaimer.
 *
 *  Redistributions in binary form must reproduce the above copyright notice, this
 *  list of conditions and the following disclaimer in the documentation and/or other
 *  materials provided with the distribution.
 *
 *  THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS ""AS IS""
 *  AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE
 *  IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE
 *  DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT HOLDER OR CONTRIBUTORS BE LIABLE FOR
 *  ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES
 *  (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES;
 *  LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON
 *  ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT
 *  (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF THIS
 *  SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
 */

/*(Auto)
    Automatically Generated by TpmPrototypes version 2.2 February 10, 2016 
    Date: Sep  9, 2016 Time: 01:03:57 PM  
*/

#ifndef    _IOBUFFERS_FP_H_
#define    _IOBUFFERS_FP_H_

//*** MemoryGetActionInputBuffer()
// This function returns the address of the buffer into which the
// command parameters will be unmarshaled in preparation for calling
// the command actions.
BYTE *
MemoryGetActionInputBuffer(
    UINT32           size           // Size, in bytes, required for the input
                                    // unmarshaling
    );

//*** MemoryGetActionOutputBuffer()
// This function returns the address of the buffer into which the command
// action code places its output values.
void *
MemoryGetActionOutputBuffer(
    UINT32           size           // required size of the buffer
    );

//*** IsLabelProperlyFormatted()
// This function checks that a label is a null-terminated string.
// NOTE: this function is here because there was no better place for it.
// return type: BOOL
//  FALSE   string is not null terminated
//  TRUE    string is null terminated
#ifndef INLINE_FUNCTIONS
BOOL
IsLabelProperlyFormatted(
    TPM2B           *x
    );
#else
INLINE BOOL
IsLabelProperlyFormatted(
    TPM2B           *x
    )
{
    return (((x)->size == 0) || ((x)->buffer[(x)->size - 1] == 0));

}
#endif // INLINE_FUNCTIONS


#endif  // _IOBUFFERS_FP_H_