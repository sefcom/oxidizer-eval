__int64 __fastcall uu_ls::show_dir_name(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v4; // rsi
  __int64 v6; // rdx
  char v7; // r14
  __int64 v8; // rax
  __int64 result; // rax
  __int64 v10; // [rsp+8h] [rbp-B0h] BYREF
  __int128 v11; // [rsp+10h] [rbp-A8h] BYREF
  __int64 v12; // [rsp+20h] [rbp-98h] BYREF
  __int64 v13; // [rsp+28h] [rbp-90h] BYREF
  __int64 v14; // [rsp+30h] [rbp-88h]
  __int64 v15; // [rsp+38h] [rbp-80h]
  __int128 v16; // [rsp+40h] [rbp-78h] BYREF
  __int64 v17; // [rsp+50h] [rbp-68h] BYREF
  _QWORD v18[2]; // [rsp+58h] [rbp-60h] BYREF
  _QWORD v19[10]; // [rsp+68h] [rbp-50h] BYREF

  v4 = *(_QWORD *)(a1 + 32);
  if ( !v4 )
    goto LABEL_16;
  v6 = *(_QWORD *)(a1 + 40);
  if ( v6 < 0 )
    goto LABEL_16;
  uucore::features::quoting_style::escape_name_inner(&v11, v4, v6, a3 + 245, 1LL);
  if ( (*(_BYTE *)(a3 + 239) & 1) != 0 && (*(_BYTE *)(a3 + 238) & 1) == 0 )
  {
    if ( *((_QWORD *)&v11 + 1) && v12 >= 0 )
    {
      uu_ls::create_hyperlink(&v16, *((_QWORD *)&v11 + 1), v12, a1);
      v7 = 0;
      goto LABEL_9;
    }
LABEL_16:
    core::panicking::panic_nounwind(anon_d13c0a923ac77d86b5cd3d5212361a5f_28_llvm_13257680528908953851, 162LL);
  }
  v17 = v12;
  v16 = v11;
  v7 = 1;
LABEL_9:
  v18[0] = &v16;
  v18[1] = <alloc::string::String as core::fmt::Display>::fmt;
  v19[0] = &unk_1FF208;
  v19[1] = 2LL;
  v19[4] = 0LL;
  v19[2] = v18;
  v19[3] = 1LL;
  v8 = std::io::Write::write_fmt(a2, v19);
  if ( v8 )
  {
    v10 = v8;
    core::result::unwrap_failed(aCalledResultUn_2, 43LL, &v10, &off_1FE618, &off_1FF228);
  }
  result = alloc::raw_vec::RawVec<T,A>::current_memory(&v13, &v16);
  if ( v14 )
    result = <alloc::alloc::Global as core::alloc::Allocator>::deallocate(&v17, v13, v14, v15);
  if ( !v7 )
  {
    result = alloc::raw_vec::RawVec<T,A>::current_memory(&v13, &v11);
    if ( v14 )
      return <alloc::alloc::Global as core::alloc::Allocator>::deallocate(&v12, v13, v14, v15);
  }
  return result;
}
