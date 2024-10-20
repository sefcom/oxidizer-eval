__int64 uu_csplit::uumain()
{
  __int64 v0; // rax
  __int64 v1; // rdx
  __int64 (__fastcall *v2)(); // rdx
  __int64 (__fastcall *v3)(); // rdx
  unsigned int v4; // ebx
  __int64 v5; // r14
  __int64 v6; // r15
  __int64 v7; // rsi
  __int64 v9; // [rsp+0h] [rbp-A8h] BYREF
  __int64 v10; // [rsp+8h] [rbp-A0h]
  const char *v11; // [rsp+10h] [rbp-98h] BYREF
  __int64 v12; // [rsp+18h] [rbp-90h]
  __int128 *v13; // [rsp+20h] [rbp-88h]
  __int64 v14; // [rsp+28h] [rbp-80h]
  __int64 v15; // [rsp+30h] [rbp-78h]
  __int128 *v16; // [rsp+40h] [rbp-68h] BYREF
  __int64 (__fastcall *v17)(); // [rsp+48h] [rbp-60h]
  __int128 v18; // [rsp+50h] [rbp-58h] BYREF
  __int64 v19; // [rsp+60h] [rbp-48h]
  __int128 **v20; // [rsp+68h] [rbp-40h] BYREF
  __int64 (__fastcall *v21)(); // [rsp+70h] [rbp-38h]
  __int128 v22; // [rsp+78h] [rbp-30h] BYREF
  __int64 v23; // [rsp+88h] [rbp-20h]

  v0 = uu_csplit::uumain::uumain();
  if ( !v0 )
    return uucore::mods::error::get_exit_code();
  v9 = v0;
  v10 = v1;
  *(_QWORD *)&v18 = &v9;
  *((_QWORD *)&v18 + 1) = <alloc::boxed::Box<T,A> as core::fmt::Display>::fmt;
  v11 = anon_ed1ebb40829bf58f514fb8171dd91230_55_llvm_9077216822178002531;
  v12 = 1LL;
  v15 = 0LL;
  v13 = &v18;
  v14 = 1LL;
  alloc::fmt::format::format_inner(&v22, &v11);
  v18 = v22;
  v19 = v23;
  if ( !(unsigned __int8)<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(*((_QWORD *)&v22 + 1), v23, 1LL, 0LL) )
  {
    v16 = (__int128 *)uucore::util_name();
    v17 = v2;
    v20 = &v16;
    v21 = <&T as core::fmt::Display>::fmt;
    v11 = (const char *)&unk_272A18;
    v12 = 2LL;
    v15 = 0LL;
    v13 = (__int128 *)&v20;
    v14 = 1LL;
    std::io::stdio::_eprint(&v11);
    v16 = &v18;
    v17 = <alloc::string::String as core::fmt::Display>::fmt;
    v11 = (const char *)&unk_272A38;
    v12 = 2LL;
    v15 = 0LL;
    v13 = (__int128 *)&v16;
    v14 = 1LL;
    std::io::stdio::_eprint(&v11);
  }
  if ( (*(unsigned __int8 (__fastcall **)(__int64))(v10 + 104))(v9) )
  {
    v16 = (__int128 *)uucore::execution_phrase();
    v17 = v3;
    v20 = &v16;
    v21 = <&T as core::fmt::Display>::fmt;
    v11 = (const char *)&off_272A58;
    v12 = 2LL;
    v15 = 0LL;
    v13 = (__int128 *)&v20;
    v14 = 1LL;
    std::io::stdio::_eprint(&v11);
  }
  v4 = (*(__int64 (__fastcall **)(__int64))(v10 + 96))(v9);
  <alloc::vec::Vec<T,A> as core::ops::drop::Drop>::drop(&v18);
  <alloc::raw_vec::RawVec<T,A> as core::ops::drop::Drop>::drop(&v18);
  v5 = v9;
  v6 = v10;
  if ( *(_QWORD *)v10 )
    (*(void (__fastcall **)(__int64))v10)(v9);
  v7 = *(_QWORD *)(v6 + 8);
  if ( v7 )
    _rust_dealloc(v5, v7, *(_QWORD *)(v6 + 16));
  return v4;
}
