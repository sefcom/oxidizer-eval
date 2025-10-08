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
  __int64 v15; // rax
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // r8
  __int64 v19; // r9
  __int64 v20; // r14
  const char *v21; // rsi
  __int64 v22; // rdx
  __int64 v23; // r15
  __int64 v24; // r12
  __int64 v25; // rdx
  __int64 v26; // rcx
  __int64 v27; // r8
  __int64 v28; // r9
  __int128 v30; // [rsp+0h] [rbp-158h] BYREF
  __int128 v31; // [rsp+10h] [rbp-148h]
  _QWORD v32[2]; // [rsp+20h] [rbp-138h] BYREF
  _OWORD v33[2]; // [rsp+30h] [rbp-128h] BYREF
  __int128 v34; // [rsp+58h] [rbp-100h] BYREF
  _QWORD *v35; // [rsp+68h] [rbp-F0h]
  __int128 dest; // [rsp+70h] [rbp-E8h] BYREF
  _QWORD *v37; // [rsp+80h] [rbp-D8h]
  __int64 v38; // [rsp+88h] [rbp-D0h]
  __int64 v39; // [rsp+90h] [rbp-C8h]
  unsigned __int64 v40; // [rsp+C0h] [rbp-98h]

  uu_truncate::parse_mode_and_size(&v30, a3, a4);
  if ( (_DWORD)v30 != 4 )
  {
    v33[1] = v31;
    v33[0] = v30;
    v32[1] = <uucore::features::parser::parse_size::ParseSizeError as core::fmt::Display>::fmt;
    *(_QWORD *)&dest = &off_E40E8;
    *((_QWORD *)&dest + 1) = 1LL;
    v39 = 0LL;
    v37 = v32;
    v38 = 1LL;
    core::option::Option<T>::map_or_else(
      &v34,
      &dest,
      v9,
      v10,
      v11,
      v12,
      v30,
      *((_QWORD *)&v30 + 1),
      v31,
      *((_QWORD *)&v31 + 1),
      v33);
    LODWORD(v38) = 1;
    dest = v34;
    v37 = v35;
    v20 = alloc::boxed::Box<T>::new(
            &dest,
            &dest,
            v16,
            v17,
            v18,
            v19,
            v30,
            *((_QWORD *)&v30 + 1),
            v31,
            *((_QWORD *)&v31 + 1));
    core::ptr::drop_in_place<uucore::features::parser::parse_size::ParseSizeError>(v33);
    return v20;
  }
  v13 = *((_QWORD *)&v30 + 1);
  if ( !*((_QWORD *)&v30 + 1) )
  {
    v21 = aYouMustSpecify;
    v22 = 55LL;
LABEL_15:
    <T as alloc::slice::<impl [T]>::to_vec_in::ConvertVec>::to_vec(&dest, v21, v22);
    LODWORD(v38) = 1;
    return alloc::boxed::Box<T>::new(
             &dest,
             v21,
             v25,
             v26,
             v27,
             v28,
             v30,
             *((_QWORD *)&v30 + 1),
             v31,
             *((_QWORD *)&v31 + 1));
  }
  v14 = v31;
  if ( (DWORD2(v30) == 5 || DWORD2(v30) == 6) && !(_QWORD)v31 )
  {
    v21 = aDivisionByZero;
    v22 = 16LL;
    goto LABEL_15;
  }
  std::fs::metadata(&dest);
  if ( (_DWORD)dest == 2 )
  {
    return uu_truncate::truncate_reference_and_size::{{closure}}(a1, a2, *((_QWORD *)&dest + 1));
  }
  else
  {
    v23 = uu_truncate::TruncateMode::to_size(v13, v14, v40);
    v24 = 24 * a6;
    v20 = 0LL;
    while ( v24 )
    {
      v15 = uu_truncate::file_truncate(*(_QWORD *)(a5 + 8), *(_QWORD *)(a5 + 16), a7, v23);
      v24 -= 24LL;
      a5 += 24LL;
      if ( v15 )
        return v15;
    }
  }
  return v20;
}