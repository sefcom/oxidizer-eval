char *__fastcall uu_df::filesystem::Filesystem::new(char *dest, char *src, _QWORD *a3)
{
  char *v5; // rsi
  __int64 v6; // r13
  __int64 v7; // r12
  unsigned __int64 v8; // rax
  __int64 v10; // [rsp+8h] [rbp-1B0h] BYREF
  __int64 v11; // [rsp+10h] [rbp-1A8h]
  __int64 v12; // [rsp+18h] [rbp-1A0h]
  __int128 v13; // [rsp+20h] [rbp-198h] BYREF
  __int64 v14; // [rsp+30h] [rbp-188h]
  __int128 v15; // [rsp+40h] [rbp-178h] BYREF
  __int64 v16; // [rsp+50h] [rbp-168h]
  __int64 v17; // [rsp+58h] [rbp-160h] BYREF
  _BYTE v18[8]; // [rsp+60h] [rbp-158h] BYREF
  __int128 v19; // [rsp+68h] [rbp-150h] BYREF
  __int64 v20; // [rsp+78h] [rbp-140h]
  __int128 v21; // [rsp+80h] [rbp-138h]
  __int64 v22; // [rsp+90h] [rbp-128h]
  _QWORD desta[22]; // [rsp+D8h] [rbp-E0h] BYREF

  v5 = src + 96;
  if ( !*((_QWORD *)src + 14) )
    v5 = src + 24;
  <alloc::string::String as core::clone::Clone>::clone(&v15, v5);
  v14 = v16;
  v13 = v15;
  uucore::features::fsext::statfs(&v17, &v13);
  if ( v17 )
  {
    alloc::raw_vec::RawVec<T,A>::current_memory(&v10, v18);
    if ( v11 )
      <alloc::alloc::Global as core::alloc::Allocator>::deallocate((char *)&v19 + 8, v10, v11, v12);
    *(_QWORD *)dest = 0x8000000000000000LL;
    if ( *a3 != 0x8000000000000000LL )
    {
      alloc::raw_vec::RawVec<T,A>::current_memory(&v10, a3);
      if ( v11 )
        <alloc::alloc::Global as core::alloc::Allocator>::deallocate(a3 + 2, v10, v11, v12);
    }
    core::ptr::drop_in_place<uucore::features::fsext::MountInfo>(src);
  }
  else
  {
    v6 = v20;
    v7 = v22;
    *(_OWORD *)&desta[19] = *(_OWORD *)a3;
    desta[21] = a3[2];
    memcpy(desta, src, 0x98uLL);
    memcpy(dest, desta, 0xB0uLL);
    *((_OWORD *)dest + 11) = v19;
    *((_QWORD *)dest + 24) = v6;
    v8 = (unsigned __int64)v21 >> 63;
    *(_OWORD *)(dest + 200) = v21;
    *((_QWORD *)dest + 27) = v7;
    dest[224] = v8;
  }
  return dest;
}
