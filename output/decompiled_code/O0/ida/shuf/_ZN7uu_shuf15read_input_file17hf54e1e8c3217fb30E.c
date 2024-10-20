_QWORD *__fastcall uu_shuf::read_input_file(_QWORD *a1, __int64 a2, __int64 a3)
{
  __int64 v4; // r13
  __int64 *v5; // rax
  __int64 *v6; // r12
  __int64 (__fastcall **v7)(); // r13
  __int64 v8; // rax
  __int64 (__fastcall **v9)(); // r13
  __int64 *v10; // rax
  __int64 v11; // rdx
  __int64 v12; // rax
  __int128 v14; // [rsp+8h] [rbp-B0h] BYREF
  __int64 v15; // [rsp+18h] [rbp-A0h]
  __int64 v16; // [rsp+20h] [rbp-98h] BYREF
  __int64 v17; // [rsp+28h] [rbp-90h]
  __int64 v18; // [rsp+30h] [rbp-88h]
  _DWORD v19[2]; // [rsp+38h] [rbp-80h] BYREF
  __int64 v20; // [rsp+40h] [rbp-78h]
  __int64 *v21; // [rsp+48h] [rbp-70h]
  __int64 (__fastcall **v22)(); // [rsp+50h] [rbp-68h]
  _QWORD v23[2]; // [rsp+58h] [rbp-60h] BYREF
  __int128 v24; // [rsp+68h] [rbp-50h]
  __int64 v25; // [rsp+78h] [rbp-40h]
  __int64 *v26; // [rsp+80h] [rbp-38h]
  __int64 (__fastcall **v27)(); // [rsp+88h] [rbp-30h]

  if ( (unsigned __int8)<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(a2, a3, asc_21C52, 1LL) )
  {
    v4 = std::io::stdio::stdin();
    v5 = (__int64 *)alloc::alloc::Global::alloc_impl(1LL, 8LL, 8LL, 0LL);
    if ( !v5 )
      alloc::alloc::handle_alloc_error(8LL, 8LL);
    v6 = v5;
    *v5 = v4;
    v7 = (__int64 (__fastcall **)())&unk_122428;
  }
  else
  {
    v16 = 0x1B600000000LL;
    LODWORD(v17) = 1;
    WORD2(v17) = 0;
    std::fs::OpenOptions::_open(v19, &v16, a2, a3);
    if ( v19[0] )
    {
      v8 = <std::io::error::Error as uucore::mods::error::FromIo<alloc::boxed::Box<uucore::mods::error::UIoError>>>::map_err_context(
             v20,
             a2,
             a3);
      if ( v8 )
      {
        a1[1] = v8;
        a1[2] = &anon_952b21e97a889c6613436287509e44a2_6_llvm_11215979972707939310;
        *a1 = 0x8000000000000000LL;
        return a1;
      }
      v9 = &anon_952b21e97a889c6613436287509e44a2_6_llvm_11215979972707939310;
    }
    else
    {
      LODWORD(v9) = v19[1];
    }
    v10 = (__int64 *)alloc::alloc::Global::alloc_impl(1LL, 4LL, 4LL, 0LL);
    v6 = v10;
    if ( !v10 )
      alloc::alloc::handle_alloc_error(4LL, 4LL);
    *(_DWORD *)v10 = (_DWORD)v9;
    v7 = &off_1223D0;
  }
  v21 = v6;
  v22 = v7;
  alloc::raw_vec::RawVec<T,A>::try_allocate_in(&v16, 0x2000LL, 0LL);
  if ( v16 )
    alloc::raw_vec::handle_error(v17, v18);
  if ( !v18 )
    core::panicking::panic_nounwind(anon_3ea58ce9b04195e65e7596eb035a132b_2_llvm_3490124054932126836, 93LL);
  v23[0] = v18;
  v23[1] = 0x2000LL;
  v24 = 0LL;
  v25 = 0LL;
  v26 = v6;
  v27 = v7;
  *(_QWORD *)&v14 = 0LL;
  *((_QWORD *)&v14 + 1) = 1LL;
  v15 = 0LL;
  if ( <std::io::buffered::bufreader::BufReader<R> as std::io::Read>::read_to_end(v23, &v14)
    && (v12 = <std::io::error::Error as uucore::mods::error::FromIo<alloc::boxed::Box<uucore::mods::error::UIoError>>>::map_err_context(
                v11,
                a2,
                a3)) != 0 )
  {
    a1[1] = v12;
    a1[2] = &anon_952b21e97a889c6613436287509e44a2_6_llvm_11215979972707939310;
    *a1 = 0x8000000000000000LL;
    if ( (_QWORD)v14 )
      _rust_dealloc(*((_QWORD *)&v14 + 1), v14, 1LL);
  }
  else
  {
    a1[2] = v15;
    *(_OWORD *)a1 = v14;
  }
  core::ptr::drop_in_place<std::io::buffered::bufreader::BufReader<alloc::boxed::Box<dyn std::io::Read>>>(v23);
  return a1;
}
