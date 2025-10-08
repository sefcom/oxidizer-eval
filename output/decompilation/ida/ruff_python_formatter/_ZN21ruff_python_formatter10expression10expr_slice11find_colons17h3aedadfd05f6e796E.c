unsigned __int64 __fastcall ruff_python_formatter::expression::expr_slice::find_colons(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        unsigned int a4,
        unsigned int a5,
        __int64 a6,
        __int64 a7)
{
  __int64 v10; // r13
  __int64 *v11; // rdi
  unsigned int v12; // eax
  unsigned __int64 result; // rax
  int v14; // r15d
  __int64 *v15; // rdi
  unsigned __int64 v16; // r13
  unsigned int v17; // eax
  __int64 v18; // rax
  char v19; // cl
  int v20; // r15d
  __int16 v21; // [rsp+Ch] [rbp-CCh]
  unsigned __int8 v22; // [rsp+Eh] [rbp-CAh]
  int v23; // [rsp+14h] [rbp-C4h]
  __int64 v24; // [rsp+18h] [rbp-C0h] BYREF
  char v25; // [rsp+20h] [rbp-B8h]
  __int16 v26; // [rsp+21h] [rbp-B7h]
  unsigned __int8 v27; // [rsp+23h] [rbp-B5h]
  unsigned __int64 v28; // [rsp+28h] [rbp-B0h]
  __int64 v29; // [rsp+30h] [rbp-A8h] BYREF
  unsigned __int64 v30; // [rsp+38h] [rbp-A0h] BYREF
  char v31; // [rsp+40h] [rbp-98h]
  unsigned __int16 v32; // [rsp+41h] [rbp-97h]
  unsigned __int8 v33; // [rsp+43h] [rbp-95h]
  _BYTE v34[8]; // [rsp+68h] [rbp-70h] BYREF
  _BYTE v35[48]; // [rsp+70h] [rbp-68h] BYREF
  _BYTE v36[56]; // [rsp+A0h] [rbp-38h] BYREF

  v10 = a7;
  v29 = a6;
  v11 = &v29;
  if ( !a6 )
    v11 = 0LL;
  v12 = core::option::Option<T>::map_or(v11, a4);
  if ( v12 > a5 )
    core::panicking::panic(aAssertionFaile_0, 38LL, &off_57DC18);
  ruff_python_trivia::tokenizer::SimpleTokenizer::new(v35, a2, a3, v12, a5);
  v36[0] = 0;
  core::iter::traits::iterator::Iterator::try_fold(&v30, v35, v36);
  if ( v31 == 90 )
  {
    *(_DWORD *)(a1 + 8) = 0;
    *(_DWORD *)(a1 + 16) = (unsigned int)&unk_8AD33;
    result = (unsigned __int64)&unk_8AD33 >> 32;
    *(_BYTE *)(a1 + 20) = (unsigned __int64)&unk_8AD33 >> 32;
    *(_WORD *)(a1 + 21) = (unsigned int)((unsigned __int64)&unk_8AD33 >> 32) >> 8;
    *(_BYTE *)(a1 + 23) = (unsigned int)((unsigned __int64)&unk_8AD33 >> 40) >> 16;
LABEL_6:
    *(_QWORD *)(a1 + 24) = 43LL;
    *(_DWORD *)a1 = 1;
    return result;
  }
  if ( v31 == 12 )
  {
    v23 = v33;
    v14 = v32;
    v28 = v30;
    v15 = &a7;
    if ( !v10 )
      v15 = 0LL;
    v16 = HIDWORD(v30);
    v17 = core::option::Option<T>::map_or(v15, HIDWORD(v30));
    if ( v17 > a5 )
      core::panicking::panic(aAssertionFaile_0, 38LL, &off_57DC30);
    ruff_python_trivia::tokenizer::SimpleTokenizer::new(&v30, a2, a3, v17, a5);
    v34[0] = 0;
    v18 = core::iter::traits::iterator::Iterator::try_fold(&v24, &v30, v34);
    if ( v25 == 90 )
    {
      v19 = 90;
    }
    else
    {
      v18 = v24;
      if ( v25 != 12 )
      {
        *(_DWORD *)(a1 + 8) = 0;
        result = (unsigned __int64)&unk_8AD85;
        *(_QWORD *)(a1 + 16) = &unk_8AD85;
        goto LABEL_6;
      }
      v22 = v27;
      v21 = v26;
      v19 = 12;
    }
    v20 = (v23 << 16) | v14;
    *(_DWORD *)(a1 + 4) = v28;
    *(_DWORD *)(a1 + 8) = v16;
    *(_BYTE *)(a1 + 12) = 12;
    *(_WORD *)(a1 + 13) = v20;
    *(_BYTE *)(a1 + 15) = BYTE2(v20);
    *(_QWORD *)(a1 + 16) = v18;
    *(_BYTE *)(a1 + 24) = v19;
    *(_WORD *)(a1 + 25) = v21;
    result = v22;
    *(_BYTE *)(a1 + 27) = v22;
    *(_DWORD *)a1 = 0;
  }
  else
  {
    *(_DWORD *)(a1 + 8) = 0;
    result = (unsigned __int64)aSliceFirstColo;
    *(_QWORD *)(a1 + 16) = aSliceFirstColo;
    *(_QWORD *)(a1 + 24) = 39LL;
    *(_DWORD *)a1 = 1;
  }
  return result;
}