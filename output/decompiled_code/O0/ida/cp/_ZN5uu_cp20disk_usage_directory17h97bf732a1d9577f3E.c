__int64 __fastcall uu_cp::disk_usage_directory(__int64 a1, __int64 a2)
{
  __int64 v2; // r13
  __int64 v3; // rsi
  __int64 v4; // rdx
  bool v5; // cf
  __int64 result; // rax
  volatile signed __int64 *v7; // [rsp+8h] [rbp-180h] BYREF
  char v8; // [rsp+10h] [rbp-178h]
  volatile signed __int64 *v9; // [rsp+18h] [rbp-170h] BYREF
  _BYTE *v10; // [rsp+20h] [rbp-168h] BYREF
  __int128 v11; // [rsp+28h] [rbp-160h]
  __int64 v12; // [rsp+38h] [rbp-150h]
  int v13; // [rsp+40h] [rbp-148h] BYREF
  int v14; // [rsp+44h] [rbp-144h]
  _BYTE v15[8]; // [rsp+50h] [rbp-138h] BYREF
  __int64 v16; // [rsp+58h] [rbp-130h]
  __int64 v17; // [rsp+60h] [rbp-128h]
  volatile signed __int64 *v18; // [rsp+68h] [rbp-120h] BYREF
  char v19; // [rsp+70h] [rbp-118h]
  __int64 v20; // [rsp+78h] [rbp-110h] BYREF
  volatile signed __int64 *v21; // [rsp+80h] [rbp-108h]
  _BYTE *v22; // [rsp+88h] [rbp-100h]
  __int128 v23; // [rsp+90h] [rbp-F8h]
  __int64 v24; // [rsp+A0h] [rbp-E8h]
  __int64 dest; // [rsp+A8h] [rbp-E0h] BYREF
  __int64 v26; // [rsp+F8h] [rbp-90h]

  std::sys::pal::unix::fs::readdir(&v18, a1, a2);
  if ( v19 == 2 )
    return 1LL;
  v7 = v18;
  v8 = v19 & 1;
  v2 = 0LL;
  while ( 1 )
  {
    <std::fs::ReadDir as core::iter::traits::iterator::Iterator>::next(&v20, &v7);
    if ( !v20 )
    {
      if ( !_InterlockedDecrement64(v7) )
        alloc::sync::Arc<T,A>::drop_slow(&v7);
      return 0LL;
    }
    if ( !v21 )
      goto LABEL_30;
    v12 = v24;
    v11 = v23;
    v9 = v21;
    v10 = v22;
    std::fs::DirEntry::file_type(&v13, &v9);
    if ( v13 )
      break;
    if ( (v14 & 0xF000) == 0x4000 )
    {
      std::fs::DirEntry::path(v15, &v9);
      if ( !v16 || (v3 = v17, v17 < 0) )
        core::panicking::panic_nounwind(anon_dd6310c77d121ecce151d075805ee620_20_llvm_1613436602710632571, 162LL);
      if ( uu_cp::disk_usage_directory() )
      {
        <alloc::raw_vec::RawVec<T,A> as core::ops::drop::Drop>::drop(v15);
        break;
      }
      v5 = __CFADD__(v4, v2);
      v2 += v4;
      if ( v5 )
        core::panicking::panic_const::panic_const_add_overflow(&off_182518, v3);
      <alloc::raw_vec::RawVec<T,A> as core::ops::drop::Drop>::drop(v15);
    }
    else
    {
      std::fs::DirEntry::metadata(&dest);
      if ( dest == 2 )
        break;
      v5 = __CFADD__(v26, v2);
      v2 += v26;
      if ( v5 )
        core::panicking::panic_const::panic_const_add_overflow(&off_182500, &v9);
    }
    if ( !_InterlockedDecrement64(v9) )
      alloc::sync::Arc<T,A>::drop_slow(&v9);
    if ( !(_QWORD)v11 )
      goto LABEL_34;
    *v10 = 0;
    <alloc::boxed::Box<T,A> as core::ops::drop::Drop>::drop(&v10);
  }
  if ( !_InterlockedDecrement64(v9) )
    alloc::sync::Arc<T,A>::drop_slow(&v9);
  if ( !(_QWORD)v11 )
LABEL_34:
    core::panicking::panic_nounwind(anon_6439b99778f68cb4ecd7011cce46bae8_3_llvm_16942018982332615979, 101LL);
  *v10 = 0;
  <alloc::boxed::Box<T,A> as core::ops::drop::Drop>::drop(&v10);
LABEL_30:
  result = 1LL;
  if ( !_InterlockedDecrement64(v7) )
  {
    alloc::sync::Arc<T,A>::drop_slow(&v7);
    return 1LL;
  }
  return result;
}
