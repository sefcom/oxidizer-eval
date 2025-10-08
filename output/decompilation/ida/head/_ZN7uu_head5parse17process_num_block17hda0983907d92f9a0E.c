unsigned __int64 __fastcall uu_head::parse::process_num_block(_QWORD *a1, __int64 a2, __int64 a3, int a4, __int64 a5)
{
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // r9
  __int64 v11; // rax
  unsigned __int64 result; // rax
  char v13; // bp
  char v14; // bl
  char v15; // r13
  int v16; // eax
  unsigned __int64 v17; // r14
  unsigned __int64 v18; // rax
  _OWORD *v19; // rcx
  __int64 v20; // [rsp+0h] [rbp-F8h]
  __int64 v21; // [rsp+8h] [rbp-F0h]
  __int128 v22; // [rsp+10h] [rbp-E8h] BYREF
  __int128 *v23; // [rsp+20h] [rbp-D8h]
  __int128 v24; // [rsp+28h] [rbp-D0h] BYREF
  unsigned __int64 v25; // [rsp+38h] [rbp-C0h]
  __int128 v26; // [rsp+40h] [rbp-B8h] BYREF
  __int128 *v27; // [rsp+50h] [rbp-A8h]
  __int64 v28; // [rsp+58h] [rbp-A0h]
  __int64 v29; // [rsp+60h] [rbp-98h]
  unsigned __int64 v30; // [rsp+70h] [rbp-88h]
  unsigned __int64 v31; // [rsp+78h] [rbp-80h]
  _QWORD *v32; // [rsp+80h] [rbp-78h]
  __int64 v33; // [rsp+88h] [rbp-70h] BYREF
  unsigned __int64 v34; // [rsp+90h] [rbp-68h] BYREF
  _BYTE v35[24]; // [rsp+98h] [rbp-60h] BYREF
  _BYTE v36[72]; // [rsp+B0h] [rbp-48h] BYREF

  core::num::<impl usize>::from_ascii_radix(&v26);
  if ( (_BYTE)v26 == 1 )
  {
    v11 = -1LL;
    if ( BYTE1(v26) != 2 )
    {
      result = 0x8000000000000000LL;
      *a1 = 0x8000000000000000LL;
      return result;
    }
  }
  else
  {
    v11 = *((_QWORD *)&v26 + 1);
  }
  v32 = a1;
  v31 = v11;
  v33 = v11;
  v13 = 0;
  HIDWORD(v21) = 0;
  v14 = 0;
  v15 = 0;
  while ( 2 )
  {
    v16 = a4 - 98;
    switch ( a4 )
    {
      case 'b':
        v13 = 1;
        v30 = 512LL;
        goto LABEL_17;
      case 'c':
        v13 = 1;
        v30 = 1LL;
        goto LABEL_17;
      case 'd':
      case 'e':
      case 'f':
      case 'g':
      case 'h':
      case 'i':
      case 'j':
      case 'l':
      case 'n':
      case 'o':
      case 'p':
      case 'r':
      case 's':
      case 't':
      case 'u':
      case 'w':
      case 'x':
      case 'y':
        goto LABEL_21;
      case 'k':
        v13 = 1;
        v30 = 1024LL;
        goto LABEL_17;
      case 'm':
        v13 = 1;
        v30 = 0x100000LL;
        goto LABEL_17;
      case 'q':
        <core::str::iter::CharIndices as core::iter::traits::iterator::Iterator>::next(
          a5,
          a2,
          v7,
          v8,
          v9,
          v10,
          v20,
          v21,
          v22);
        a4 = v7;
        v15 = 1;
        v14 = 0;
        if ( (_DWORD)v7 != 1114112 )
          continue;
        *(_QWORD *)&v24 = 0LL;
        *((_QWORD *)&v24 + 1) = 8LL;
        v25 = 0LL;
        v14 = 0;
        goto LABEL_23;
      case 'v':
        <core::str::iter::CharIndices as core::iter::traits::iterator::Iterator>::next(
          a5,
          a2,
          v7,
          v8,
          v9,
          v10,
          v20,
          v21,
          v22);
        a4 = v7;
        v14 = 1;
        v15 = 0;
        if ( (_DWORD)v7 != 1114112 )
          continue;
        *(_QWORD *)&v24 = 0LL;
        *((_QWORD *)&v24 + 1) = 8LL;
        v25 = 0LL;
        v17 = v31;
        goto LABEL_24;
      case 'z':
        LOBYTE(v16) = 1;
        HIDWORD(v21) = v16;
        goto LABEL_17;
      default:
        if ( a4 )
        {
LABEL_21:
          result = 0x8000000000000000LL;
          *v32 = 0x8000000000000000LL;
          return result;
        }
LABEL_17:
        <core::str::iter::CharIndices as core::iter::traits::iterator::Iterator>::next(
          a5,
          a2,
          v7,
          v8,
          v9,
          v10,
          v20,
          v21,
          v22);
        a4 = v7;
        if ( (_DWORD)v7 != 1114112 )
          continue;
        *(_QWORD *)&v24 = 0LL;
        *((_QWORD *)&v24 + 1) = 8LL;
        v25 = 0LL;
        if ( (v15 & 1) != 0 )
        {
LABEL_23:
          v17 = v31;
          <T as alloc::slice::<impl [T]>::to_vec_in::ConvertVec>::to_vec(&v26, aQ, 2LL);
          v23 = v27;
          v22 = v26;
          alloc::vec::Vec<T,A>::push(&v24, &v22, &off_F7A40);
          if ( (v14 & 1) == 0 )
            goto LABEL_25;
          goto LABEL_24;
        }
        v17 = v31;
        if ( (v14 & 1) != 0 )
        {
LABEL_24:
          <T as alloc::slice::<impl [T]>::to_vec_in::ConvertVec>::to_vec(&v26, aV, 2LL);
          v23 = v27;
          v22 = v26;
          alloc::vec::Vec<T,A>::push(&v24, &v22, &off_F7A58);
        }
LABEL_25:
        if ( (v21 & 0x100000000LL) != 0 )
        {
          <T as alloc::slice::<impl [T]>::to_vec_in::ConvertVec>::to_vec(&v26, aZ, 2LL);
          v23 = v27;
          v22 = v26;
          alloc::vec::Vec<T,A>::push(&v24, &v22, &off_F7A70);
        }
        if ( (v13 & 1) != 0 )
        {
          <T as alloc::slice::<impl [T]>::to_vec_in::ConvertVec>::to_vec(&v26, aC, 2LL);
          v23 = v27;
          v22 = v26;
          alloc::vec::Vec<T,A>::push(&v24, &v22, &off_F7A88);
          v18 = v30 * v17;
          if ( !is_mul_ok(v30, v17) )
            v18 = -1LL;
          v34 = v18;
          *(_QWORD *)&v22 = &v34;
          *((_QWORD *)&v22 + 1) = core::fmt::num::imp::<impl core::fmt::Display for usize>::fmt;
          *(_QWORD *)&v26 = &unk_18A90;
          *((_QWORD *)&v26 + 1) = 1LL;
          v29 = 0LL;
          v27 = &v22;
          v28 = 1LL;
          core::option::Option<T>::map_or_else(v35, &v26);
          alloc::vec::Vec<T,A>::push(&v24, v35, &off_F7AA0);
        }
        else
        {
          <T as alloc::slice::<impl [T]>::to_vec_in::ConvertVec>::to_vec(&v26, aN, 2LL);
          v23 = v27;
          v22 = v26;
          alloc::vec::Vec<T,A>::push(&v24, &v22, &off_F7AB8);
          *(_QWORD *)&v22 = &v33;
          *((_QWORD *)&v22 + 1) = core::fmt::num::imp::<impl core::fmt::Display for usize>::fmt;
          *(_QWORD *)&v26 = &unk_18A90;
          *((_QWORD *)&v26 + 1) = 1LL;
          v29 = 0LL;
          v27 = &v22;
          v28 = 1LL;
          core::option::Option<T>::map_or_else(v36, &v26);
          alloc::vec::Vec<T,A>::push(&v24, v36, &off_F7AD0);
        }
        result = v25;
        v19 = v32;
        v32[2] = v25;
        *v19 = v24;
        return result;
    }
  }
}