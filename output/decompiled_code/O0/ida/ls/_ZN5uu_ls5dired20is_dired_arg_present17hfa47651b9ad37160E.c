__int64 __fastcall uu_ls::dired::is_dired_arg_present()
{
  unsigned int v0; // ebx
  __int64 v1; // rdx
  __int64 v2; // r8
  __int64 v3; // r9
  _BYTE v5[8]; // [rsp+8h] [rbp-60h] BYREF
  __int64 v6; // [rsp+10h] [rbp-58h]
  unsigned __int64 v7; // [rsp+18h] [rbp-50h]
  _OWORD v8[2]; // [rsp+20h] [rbp-48h] BYREF
  _OWORD v9[2]; // [rsp+40h] [rbp-28h] BYREF

  std::env::args(v9);
  v8[1] = v9[1];
  v8[0] = v9[0];
  <alloc::vec::Vec<T> as alloc::vec::spec_from_iter_nested::SpecFromIterNested<T,I>>::from_iter(v5, v8);
  if ( !v6 || (v6 & 7) != 0 || v7 >= 0x555555555555556LL )
    core::panicking::panic_nounwind(anon_b8e768ed0ddf17f1539d76bb5aedca5a_38_llvm_9157631453777517788, 162LL);
  if ( !v7 )
  {
LABEL_14:
    v0 = 0;
    goto LABEL_15;
  }
  v1 = 0LL;
  while ( 1 )
  {
    v2 = *(_QWORD *)(v6 + v1 + 8);
    if ( !v2 || (v3 = *(_QWORD *)(v6 + v1 + 16), v3 < 0) )
      core::panicking::panic_nounwind(anon_d13c0a923ac77d86b5cd3d5212361a5f_28_llvm_13257680528908953851, 162LL);
    if ( v3 != 2 )
      break;
    if ( *(_WORD *)v2 == 17453 )
      goto LABEL_13;
LABEL_7:
    v1 += 24LL;
    if ( 24 * v7 == v1 )
      goto LABEL_14;
  }
  if ( v3 != 7 || *(_DWORD *)v2 ^ 0x69642D2D | *(_DWORD *)(v2 + 3) ^ 0x64657269 )
    goto LABEL_7;
LABEL_13:
  LOBYTE(v0) = 1;
LABEL_15:
  core::ptr::drop_in_place<alloc::vec::Vec<alloc::string::String>>(v5);
  return v0;
}
