_QWORD *__fastcall uu_wc::files0_iter::{{closure}}(_QWORD *a1, __int64 a2, __int64 *a3)
{
  __int64 v5; // rsi
  _BYTE *v6; // rdi
  __int64 v7; // rax
  __int128 v8; // xmm0

  v5 = *a3;
  v6 = (_BYTE *)a3[1];
  if ( *a3 == 0x8000000000000000LL )
  {
    a1[1] = <std::io::error::Error as uucore::mods::error::FromIo<alloc::boxed::Box<uucore::mods::error::UIoError>>>::map_err_context(
              v6,
              a2);
    a1[2] = &off_118CC0;
    *a1 = 0x8000000000000002LL;
  }
  else
  {
    if ( !v6 || (v7 = a3[2], v7 < 0) )
      core::panicking::panic_nounwind(anon_dd263a7f757787748cb25eec96e5d9c9_4_llvm_2301497830685427482, 162LL);
    if ( v7 == 1 && *v6 == 45 )
    {
      *a1 = 0x8000000000000001LL;
      *((_BYTE *)a1 + 8) = 0;
      if ( v5 )
        _rust_dealloc(v6, v5, 1LL);
    }
    else
    {
      v8 = *(_OWORD *)a3;
      a1[2] = a3[2];
      *(_OWORD *)a1 = v8;
    }
  }
  return a1;
}
