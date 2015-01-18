
/*
   Copyright (c) 2014 Malte Hildingsson, malte (at) afterwi.se

   Permission is hereby granted, free of charge, to any person obtaining a copy
   of this software and associated documentation files (the "Software"), to deal
   in the Software without restriction, including without limitation the rights
   to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
   copies of the Software, and to permit persons to whom the Software is
   furnished to do so, subject to the following conditions:

   The above copyright notice and this permission notice shall be included in
   all copies or substantial portions of the Software.

   THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
   IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
   FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
   AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
   LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
   OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
   THE SOFTWARE.
 */

#ifndef AW_JSONIZE_H
#define AW_JSONIZE_H

#define JSONIZE_STRIZE(x) JSONIZE_STRIZE1(x)
#define JSONIZE_STRIZE1(x) #x

#define JSONIZE_FMTTOK(x) x
#define JSONIZE_FMTKEY(x) "%s:"
#define JSONIZE_FMTLIT(x) "%s"
#define JSONIZE_FMTSTR(x) "\"%s\""
#define JSONIZE_FMTINT(x) "%d"
#define JSONIZE_FMTFLOAT(x) "%f"
#define JSONIZE_FMTBOOL(x) "%s"

#define JSONIZE_ARGTOK(x)
#define JSONIZE_ARGKEY(x) , JSONIZE_STRIZE(x)
#define JSONIZE_ARGLIT(x) , JSONIZE_STRIZE(x)
#define JSONIZE_ARGSTR(x) , (x)
#define JSONIZE_ARGINT(x) , (x)
#define JSONIZE_ARGFLOAT(x) , (x)
#define JSONIZE_ARGBOOL(x) , ((x) ? "true" : "false")

#define JSONIZE(x) x(JSONIZE_FMT) x(JSONIZE_ARG)

#endif /* AW_JSONIZE_H */

