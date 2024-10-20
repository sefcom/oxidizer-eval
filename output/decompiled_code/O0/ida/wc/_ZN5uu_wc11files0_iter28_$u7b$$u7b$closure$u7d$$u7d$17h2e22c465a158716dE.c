unsigned __int64 *__fastcall uu_wc::files0_iter::{{closure}}(unsigned __int64 *a1, _QWORD *a2)
{
  unsigned __int64 v3; // [rsp+8h] [rbp-60h]
  __int64 v4; // [rsp+10h] [rbp-58h]
  __int64 (__fastcall **v5)(); // [rsp+18h] [rbp-50h]
  unsigned __int64 v6; // [rsp+20h] [rbp-48h] BYREF
  _BYTE *v7; // [rsp+28h] [rbp-40h]
  __int64 v8; // [rsp+30h] [rbp-38h]

  if ( *a2 == 0x8000000000000000LL )
  {
    v3 = 0x8000000000000003LL;
LABEL_18:
    *a2 = 0x8000000000000000LL;
    goto LABEL_19;
  }
  <std::io::Split<B> as core::iter::traits::iterator::Iterator>::next(&v6, a2 + 3);
  if ( v6 == 0x8000000000000001LL )
  {
    v3 = 0x8000000000000003LL;
LABEL_15:
    if ( *a2 != 0x8000000000000000LL )
    {
      core::ptr::drop_in_place<std::io::buffered::bufreader::BufReader<std::io::stdio::StdinLock>>(a2 + 3);
      alloc::raw_vec::RawVec<T,A>::current_memory(&v6, a2);
      if ( v7 )
        <alloc::alloc::Global as core::alloc::Allocator>::deallocate(a2 + 2, v6, v7, v8);
    }
    goto LABEL_18;
  }
  if ( v6 == 0x8000000000000000LL )
  {
    v3 = 0x8000000000000002LL;
    v4 = <std::io::error::Error as uucore::mods::error::FromIo<alloc::boxed::Box<uucore::mods::error::UIoError>>>::map_err_context(
           v7,
           a2);
    v5 = &off_118CC0;
    goto LABEL_15;
  }
  if ( !v7 || v8 < 0 )
    core::panicking::panic_nounwind(anon_dd263a7f757787748cb25eec96e5d9c9_4_llvm_2301497830685427482, 162LL);
  if ( v8 == 1 && *v7 == 45 )
  {
    if ( v6 )
      _rust_dealloc(v7, v6, 1LL);
    v3 = 0x8000000000000001LL;
    v4 = 0LL;
  }
  else
  {
    v3 = v6;
    v4 = (__int64)v7;
    v5 = (__int64 (__fastcall **)())v8;
    if ( (v6 & 0xFFFFFFFFFFFFFFFELL) == 0x8000000000000002LL )
      goto LABEL_15;
  }
LABEL_19:
  a1[2] = (unsigned __int64)v5;
  *a1 = v3;
  a1[1] = v4;
  return a1;
}
