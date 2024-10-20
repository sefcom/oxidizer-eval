__int64 __fastcall uu_wc::files0_iter::{{closure}}::{{closure}}(__int64 a1, __int64 a2)
{
  __int64 v3; // rsi
  __int64 v4; // rdx
  _QWORD v6[3]; // [rsp+8h] [rbp-80h] BYREF
  _QWORD v7[2]; // [rsp+20h] [rbp-68h] BYREF
  __int128 v8; // [rsp+30h] [rbp-58h] BYREF
  __int64 v9; // [rsp+40h] [rbp-48h]
  _QWORD v10[8]; // [rsp+48h] [rbp-40h] BYREF

  v3 = *(_QWORD *)(a2 + 8);
  if ( !v3 || (v4 = *(_QWORD *)(a2 + 16), v4 < 0) )
    core::panicking::panic_nounwind(anon_dd263a7f757787748cb25eec96e5d9c9_4_llvm_2301497830685427482, 162LL);
  uucore::features::quoting_style::escape_name_inner(
    v6,
    v3,
    v4,
    &anon_f24642c09166824134b4a04b26eaa90d_12_llvm_11289963011487936703,
    0LL);
  v7[0] = v6;
  v7[1] = <alloc::string::String as core::fmt::Display>::fmt;
  v10[0] = &anon_f24642c09166824134b4a04b26eaa90d_77_llvm_11289963011487936703;
  v10[1] = 2LL;
  v10[2] = v7;
  v10[3] = 1LL;
  v10[4] = 0LL;
  alloc::fmt::format::format_inner(&v8, v10);
  if ( v6[0] )
    _rust_dealloc(v6[1], v6[0], 1LL);
  *(_QWORD *)(a1 + 16) = v9;
  *(_OWORD *)a1 = v8;
  return a1;
}
