__int64 __fastcall uu_tail::uumain(__int64 a1)
{
  __int128 *v2; // rdi
  __int64 v3; // rdx
  __int64 v4; // rcx
  __int64 v5; // r8
  __int64 v6; // r9
  __int64 v7; // r14
  __int64 (__fastcall **v8)(); // r15
  char v9; // al
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v13; // r9
  _OWORD *v14; // rax
  __int128 v15; // xmm0
  const char *v16; // rdx
  const char *v17; // rdx
  unsigned int v18; // ebx
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // r15
  __int64 v22; // r12
  __int64 v23; // rsi
  __int64 (__fastcall **v24)(); // rdx
  __int64 v26; // [rsp+0h] [rbp-128h] BYREF
  __int64 v27; // [rsp+8h] [rbp-120h]
  __int128 v28; // [rsp+10h] [rbp-118h] BYREF
  _BYTE v29[24]; // [rsp+20h] [rbp-108h]
  __int128 v30; // [rsp+38h] [rbp-F0h]
  __int128 v31; // [rsp+48h] [rbp-E0h]
  __int64 v32; // [rsp+58h] [rbp-D0h]
  __int128 *v33; // [rsp+68h] [rbp-C0h] BYREF
  const char *v34; // [rsp+70h] [rbp-B8h]
  __int64 v35; // [rsp+78h] [rbp-B0h]
  char v36; // [rsp+80h] [rbp-A8h]
  __int128 v37; // [rsp+88h] [rbp-A0h] BYREF
  __int64 v38; // [rsp+98h] [rbp-90h]
  __int128 v39; // [rsp+A0h] [rbp-88h] BYREF
  __int64 v40; // [rsp+B0h] [rbp-78h]
  _OWORD v41[3]; // [rsp+B8h] [rbp-70h] BYREF
  __int64 v42; // [rsp+E8h] [rbp-40h]
  __int128 v43; // [rsp+F0h] [rbp-38h] BYREF
  __int64 v44; // [rsp+100h] [rbp-28h]

  v2 = &v28;
  uu_tail::args::parse_args((__int64)&v28);
  v7 = *((_QWORD *)&v28 + 1);
  v8 = *(__int64 (__fastcall ***)())v29;
  if ( (_QWORD)v28 != 5LL )
  {
    v42 = v32;
    v41[2] = v31;
    v41[1] = v30;
    v41[0] = *(_OWORD *)&v29[8];
    v39 = v28;
    v40 = *(_QWORD *)v29;
    uu_tail::args::Settings::check_warnings(&v39, a1);
    v9 = uu_tail::args::Settings::verify(&v39);
    if ( v9 == 2 )
    {
      v7 = 0LL;
    }
    else
    {
      if ( v9 != 1 )
      {
        v7 = uu_tail::uu_tail(&v39);
        v8 = v24;
        <alloc::vec::Vec<T,A> as core::ops::drop::Drop>::drop(v41);
        v2 = v41;
        <alloc::raw_vec::RawVec<T,A> as core::ops::drop::Drop>::drop(v41);
        if ( v7 )
          goto LABEL_9;
        return (unsigned int)uucore::mods::error::get_exit_code(v2, a1);
      }
      v33 = 0LL;
      v34 = asc_19CE7;
      v35 = 1LL;
      v36 = 1;
      *(_QWORD *)&v28 = &off_158B78;
      *((_QWORD *)&v28 + 1) = 2LL;
      *(_QWORD *)&v29[16] = 0LL;
      *(_QWORD *)v29 = &v26;
      *(_QWORD *)&v29[8] = 1LL;
      ((void (__fastcall *)(__int128 *, __int128 *, __int64, __int64, __int64, __int64, __int128 **, __int64 (__fastcall *)()))alloc::fmt::format::format_inner)(
        &v37,
        &v28,
        v10,
        v11,
        v12,
        v13,
        &v33,
        <os_display::Quoted as core::fmt::Display>::fmt);
      *(_DWORD *)&v29[8] = 1;
      v28 = v37;
      *(_QWORD *)v29 = v38;
      a1 = 8LL;
      v14 = (_OWORD *)_rust_alloc(32LL, 8LL);
      if ( !v14 )
        alloc::alloc::handle_alloc_error(8LL, 32LL);
      v7 = (__int64)v14;
      v15 = v28;
      v14[1] = *(_OWORD *)v29;
      *v14 = v15;
    }
    <alloc::vec::Vec<T,A> as core::ops::drop::Drop>::drop(v41);
    v2 = v41;
    <alloc::raw_vec::RawVec<T,A> as core::ops::drop::Drop>::drop(v41);
    v8 = &off_158BD0;
  }
  if ( !v7 )
    return (unsigned int)uucore::mods::error::get_exit_code(v2, a1);
LABEL_9:
  *(_QWORD *)&v39 = &v26;
  *((_QWORD *)&v39 + 1) = <alloc::boxed::Box<T,A> as core::fmt::Display>::fmt;
  *(_QWORD *)&v28 = anon_a15cc2d3895659decb08e547ee58be7a_73_llvm_5555830998822834654;
  *((_QWORD *)&v28 + 1) = 1LL;
  *(_QWORD *)&v29[16] = 0LL;
  *(_QWORD *)v29 = &v39;
  *(_QWORD *)&v29[8] = 1LL;
  ((void (__fastcall *)(__int128 *, __int128 *, __int64, __int64, __int64, __int64, __int64, __int64 (__fastcall **)()))alloc::fmt::format::format_inner)(
    &v43,
    &v28,
    v3,
    v4,
    v5,
    v6,
    v7,
    v8);
  v39 = v43;
  v40 = v44;
  if ( v44 )
  {
    v33 = (__int128 *)uucore::util_name();
    v34 = v16;
    *(_QWORD *)&v37 = &v33;
    *((_QWORD *)&v37 + 1) = <&T as core::fmt::Display>::fmt;
    *(_QWORD *)&v28 = &unk_158B18;
    *((_QWORD *)&v28 + 1) = 2LL;
    *(_QWORD *)&v29[16] = 0LL;
    *(_QWORD *)v29 = &v37;
    *(_QWORD *)&v29[8] = 1LL;
    std::io::stdio::_eprint(&v28);
    v33 = &v39;
    v34 = (const char *)<alloc::string::String as core::fmt::Display>::fmt;
    *(_QWORD *)&v28 = &unk_158B38;
    *((_QWORD *)&v28 + 1) = 2LL;
    *(_QWORD *)&v29[16] = 0LL;
    *(_QWORD *)v29 = &v33;
    *(_QWORD *)&v29[8] = 1LL;
    std::io::stdio::_eprint(&v28);
  }
  if ( (*(unsigned __int8 (__fastcall **)(__int64))(v27 + 104))(v26) )
  {
    v33 = (__int128 *)uucore::execution_phrase();
    v34 = v17;
    *(_QWORD *)&v37 = &v33;
    *((_QWORD *)&v37 + 1) = <&T as core::fmt::Display>::fmt;
    *(_QWORD *)&v28 = &off_158B58;
    *((_QWORD *)&v28 + 1) = 2LL;
    *(_QWORD *)&v29[16] = 0LL;
    *(_QWORD *)v29 = &v37;
    *(_QWORD *)&v29[8] = 1LL;
    std::io::stdio::_eprint(&v28);
  }
  v18 = (*(__int64 (__fastcall **)(__int64))(v27 + 96))(v26);
  <alloc::vec::Vec<T,A> as core::ops::drop::Drop>::drop(&v39, &v28, v19, v20);
  <alloc::raw_vec::RawVec<T,A> as core::ops::drop::Drop>::drop(&v39);
  v21 = v26;
  v22 = v27;
  if ( *(_QWORD *)v27 )
    (*(void (__fastcall **)(__int64))v27)(v26);
  v23 = *(_QWORD *)(v22 + 8);
  if ( v23 )
    _rust_dealloc(v21, v23, *(_QWORD *)(v22 + 16));
  return v18;
}
