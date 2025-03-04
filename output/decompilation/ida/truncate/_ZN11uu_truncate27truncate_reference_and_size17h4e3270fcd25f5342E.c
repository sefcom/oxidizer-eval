__int64 __fastcall uu_truncate::truncate_reference_and_size(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        unsigned __int8 a7)
{
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // r9
  __int64 v13; // r13
  unsigned __int64 v14; // rbp
  __int64 result; // rax
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // r8
  __int64 v19; // r9
  __int64 v20; // rbx
  const char *v21; // rsi
  __int64 v22; // rdx
  __int64 v23; // r15
  __int64 v24; // rax
  __int64 v25; // rdx
  __int64 v26; // rcx
  __int64 v27; // r8
  __int64 v28; // r9
  __int128 v29; // [rsp+0h] [rbp-158h] BYREF
  __int128 v30; // [rsp+10h] [rbp-148h]
  _QWORD v31[2]; // [rsp+20h] [rbp-138h] BYREF
  _OWORD v32[2]; // [rsp+30h] [rbp-128h] BYREF
  __int128 v33; // [rsp+58h] [rbp-100h] BYREF
  _QWORD *v34; // [rsp+68h] [rbp-F0h]
  __int128 v35; // [rsp+70h] [rbp-E8h] BYREF
  _QWORD *v36; // [rsp+80h] [rbp-D8h]
  __int64 v37; // [rsp+88h] [rbp-D0h]
  __int64 v38; // [rsp+90h] [rbp-C8h]
  unsigned __int64 v39; // [rsp+C0h] [rbp-98h]

  uu_truncate::parse_mode_and_size(&v29, a3, a4);
  if ( (_DWORD)v29 != 3 )
  {
    v32[1] = v30;
    v32[0] = v29;
    v31[1] = <uucore::parser::parse_size::ParseSizeError as core::fmt::Display>::fmt;
    *(_QWORD *)&v35 = &off_116668;
    *((_QWORD *)&v35 + 1) = 1LL;
    v38 = 0LL;
    v36 = v31;
    v37 = 1LL;
    core::option::Option<T>::map_or_else(
      &v33,
      &v35,
      v9,
      v10,
      v11,
      v12,
      v29,
      *((_QWORD *)&v29 + 1),
      v30,
      *((_QWORD *)&v30 + 1),
      v32);
    LODWORD(v37) = 1;
    v35 = v33;
    v36 = v34;
    v20 = alloc::boxed::Box<T>::new(
            &v35,
            &v35,
            v16,
            v17,
            v18,
            v19,
            v29,
            *((_QWORD *)&v29 + 1),
            v30,
            *((_QWORD *)&v30 + 1));
    core::ptr::drop_in_place<uucore::parser::parse_size::ParseSizeError>(v32);
    return v20;
  }
  v13 = *((_QWORD *)&v29 + 1);
  if ( !*((_QWORD *)&v29 + 1) )
  {
    v21 = aYouMustSpecify;
    v22 = 55LL;
LABEL_15:
    <T as alloc::slice::hack::ConvertVec>::to_vec(&v35, v21, v22);
    LODWORD(v37) = 1;
    return alloc::boxed::Box<T>::new(
             &v35,
             v21,
             v25,
             v26,
             v27,
             v28,
             v29,
             *((_QWORD *)&v29 + 1),
             v30,
             *((_QWORD *)&v30 + 1));
  }
  v14 = v30;
  if ( (DWORD2(v29) == 5 || DWORD2(v29) == 6) && !(_QWORD)v30 )
  {
    v21 = aDivisionByZero;
    v22 = 16LL;
    goto LABEL_15;
  }
  std::fs::metadata(&v35, a1, a2);
  if ( (_DWORD)v35 == 2 )
    return uu_truncate::truncate_reference_and_size::{{closure}}(a1, a2, *((_QWORD *)&v35 + 1));
  v23 = uu_truncate::TruncateMode::to_size(v13, v14, v39);
  *(_QWORD *)&v35 = a5;
  *((_QWORD *)&v35 + 1) = a5 + 24 * a6;
  while ( 1 )
  {
    v24 = <core::slice::iter::Iter<T> as core::iter::traits::iterator::Iterator>::next(&v35);
    if ( !v24 )
      break;
    result = uu_truncate::file_truncate(*(_QWORD *)(v24 + 8), *(_QWORD *)(v24 + 16), a7, v23);
    if ( result )
      return result;
  }
  return 0LL;
}
