_QWORD *__fastcall uu_wc::files0_iter_stdin::{{closure}}(_QWORD *a1, __int64 a2, __int64 a3)
{
  _OWORD *v4; // rax
  __int128 v6; // [rsp+0h] [rbp-38h]
  __int128 v7; // [rsp+10h] [rbp-28h]

  if ( *(_QWORD *)a3 == 0x8000000000000001LL )
  {
    *(_QWORD *)&v6 = 0x8000000000000002LL;
    v4 = (_OWORD *)alloc::alloc::Global::alloc_impl(1LL, 8LL, 32LL, 0LL);
    if ( !v4 )
      alloc::alloc::handle_alloc_error(8LL, 32LL);
    v4[1] = v7;
    *v4 = v6;
    a1[1] = v4;
    a1[2] = &anon_56f426745e7d4c5372634db4f0431a2b_25_llvm_8267291718986063344;
    *a1 = 0x8000000000000002LL;
    core::ptr::drop_in_place<core::result::Result<uu_wc::Input,alloc::boxed::Box<dyn uucore::mods::error::UError>>>(a3);
  }
  else
  {
    a1[2] = *(_QWORD *)(a3 + 16);
    *(_OWORD *)a1 = *(_OWORD *)a3;
  }
  return a1;
}
