_OWORD *__fastcall uu_ln::numbered_backup_path(__int64 a1, __int64 a2, __int64 a3)
{
  _OWORD *result; // rax
  __int64 v5; // [rsp+0h] [rbp-148h] BYREF
  __int128 v6; // [rsp+8h] [rbp-140h] BYREF
  __int64 v7; // [rsp+18h] [rbp-130h] BYREF
  __int128 v8; // [rsp+20h] [rbp-128h] BYREF
  signed __int64 v9; // [rsp+30h] [rbp-118h] BYREF
  __int64 v10; // [rsp+38h] [rbp-110h]
  _QWORD v11[2]; // [rsp+40h] [rbp-108h] BYREF
  __int128 v12; // [rsp+50h] [rbp-F8h] BYREF
  signed __int64 v13; // [rsp+60h] [rbp-E8h]
  char **dest; // [rsp+68h] [rbp-E0h] BYREF
  __int64 v15; // [rsp+70h] [rbp-D8h] BYREF
  _QWORD *v16; // [rsp+78h] [rbp-D0h]
  __int64 v17; // [rsp+80h] [rbp-C8h]
  __int64 v18; // [rsp+88h] [rbp-C0h]

  v10 = a1;
  v5 = 1LL;
  while ( 1 )
  {
    v11[0] = &v5;
    v11[1] = core::fmt::num::imp::<impl core::fmt::Display for usize>::fmt;
    dest = &off_117B18;
    v15 = 2LL;
    v16 = v11;
    v17 = 1LL;
    v18 = 0LL;
    alloc::fmt::format::format_inner(&v12, &dest);
    v8 = v12;
    v9 = v13;
    if ( !*((_QWORD *)&v12 + 1) || v13 < 0 )
      goto LABEL_15;
    uu_ln::simple_backup_path((__int64)&v6, a2, a3, *((const void **)&v12 + 1), v13);
    alloc::raw_vec::RawVec<T,A>::current_memory(&dest, &v8);
    if ( v15 )
      <alloc::alloc::Global as core::alloc::Allocator>::deallocate(&v9, dest, v15, v16);
    if ( !*((_QWORD *)&v6 + 1) || v7 < 0 )
LABEL_15:
      core::panicking::panic_nounwind(anon_df683e64b8c9978a64b8f4e8e668b506_19_llvm_10436422061628228747, 162LL);
    std::sys::pal::unix::fs::stat(&dest);
    if ( dest == (char **)((char *)&dword_0 + 2) )
      break;
    if ( v5 == -1 )
      core::panicking::panic_const::panic_const_add_overflow(&off_117B38);
    ++v5;
    alloc::raw_vec::RawVec<T,A>::current_memory(&dest, &v6);
    if ( v15 )
      <alloc::alloc::Global as core::alloc::Allocator>::deallocate(&v7, dest, v15, v16);
  }
  std::io::error::repr_bitpacked::decode_repr(&dest, v15);
  if ( (unsigned __int8)dest >= 3u )
    core::ptr::drop_in_place<alloc::boxed::Box<std::io::error::Custom>>(&v15);
  result = (_OWORD *)v10;
  *(_QWORD *)(v10 + 16) = v7;
  *result = v6;
  return result;
}
