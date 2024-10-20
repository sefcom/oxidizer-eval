__int64 __fastcall uu_pwd::logical_path(__int64 a1)
{
  __int64 v2; // r14
  unsigned __int64 v3; // r15
  __int64 v4; // r14
  unsigned __int64 v5; // r15
  unsigned __int64 v6; // rdx
  unsigned __int64 v7; // r15
  __int64 v8; // r14
  char v9; // cl
  unsigned __int8 v10; // al
  char v11; // al
  __int64 v12; // rdx
  __int64 v13; // r12
  __int64 v14; // r14
  _OWORD *v15; // rcx
  __int128 v16; // [rsp+0h] [rbp-428h] BYREF
  __int64 v17; // [rsp+10h] [rbp-418h]
  __int64 v18; // [rsp+18h] [rbp-410h]
  __int64 v19; // [rsp+20h] [rbp-408h]
  __int64 v20; // [rsp+28h] [rbp-400h] BYREF
  __int64 v21; // [rsp+30h] [rbp-3F8h]
  unsigned __int64 v22; // [rsp+38h] [rbp-3F0h] BYREF
  unsigned __int64 v23; // [rsp+40h] [rbp-3E8h]
  unsigned __int64 v24; // [rsp+48h] [rbp-3E0h]
  __int64 v25; // [rsp+50h] [rbp-3D8h] BYREF
  unsigned __int64 v26; // [rsp+58h] [rbp-3D0h]
  __int64 v27; // [rsp+60h] [rbp-3C8h]
  __int64 v28; // [rsp+68h] [rbp-3C0h]
  __int64 v29; // [rsp+70h] [rbp-3B8h]
  __int16 v30; // [rsp+78h] [rbp-3B0h]
  _QWORD src[22]; // [rsp+80h] [rbp-3A8h] BYREF
  __int128 v32; // [rsp+130h] [rbp-2F8h] BYREF
  __int64 v33; // [rsp+140h] [rbp-2E8h]
  _QWORD v34[24]; // [rsp+148h] [rbp-2E0h] BYREF
  _QWORD v35[20]; // [rsp+208h] [rbp-220h] BYREF
  _QWORD dest[22]; // [rsp+2A8h] [rbp-180h] BYREF
  _BYTE v37[160]; // [rsp+358h] [rbp-D0h] BYREF

  v19 = a1;
  std::env::_var_os(&v32, aPwd, 3LL);
  if ( (_QWORD)v32 == 0x8000000000000000LL )
  {
    *(_QWORD *)&v16 = 0x8000000000000000LL;
  }
  else
  {
    v16 = v32;
    v17 = v33;
    v18 = *((_QWORD *)&v32 + 1);
    if ( !*((_QWORD *)&v32 + 1) || v17 < 0 )
      core::panicking::panic_nounwind(aUnsafePrecondi_0, 162LL);
    std::path::Path::components(src, v18, v17);
    if ( (src[7] & 0x10000LL) != 0 || (unsigned __int8)(LOBYTE(src[2]) - 7) <= 0xFDu )
    {
      std::sys::os_str::bytes::Slice::to_string_lossy(&v20, v18, v17);
      v2 = v21;
      v3 = v22;
      if ( v20 != 0x8000000000000000LL )
        core::slice::raw::from_raw_parts::precondition_check(v21, 1LL, 1LL, v22);
      v23 = 0LL;
      v24 = v3;
      v25 = v2;
      v26 = v3;
      v27 = v2;
      v28 = v2 + v3;
      v29 = 0LL;
      v30 = 1;
      while ( (v30 & 0x100) == 0 )
      {
        v4 = v25;
        v5 = v26;
        do
          <core::str::pattern::MultiCharEqSearcher<C> as core::str::pattern::Searcher>::next(src, &v25);
        while ( src[0] == 1LL );
        if ( src[0] )
        {
          if ( (v30 & 0x100) != 0 )
            break;
          HIBYTE(v30) = 1;
          if ( (v30 & 1) == 0 && v24 == v23 )
            break;
          v7 = v24 - v23;
          if ( v24 < v23 || v24 > v26 )
LABEL_55:
            core::panicking::panic_nounwind(anon_ff765ffa8c564fe4079308b568cc8f06_8_llvm_17873003023693898768, 102LL);
          v8 = v25 + v23;
          if ( !(v25 + v23) )
            break;
        }
        else
        {
          v6 = v5;
          v7 = src[1] - v23;
          if ( src[1] < v23 || src[1] > v6 )
            goto LABEL_55;
          v8 = v23 + v4;
          v23 = src[2];
          if ( !v8 )
            break;
        }
        v9 = <[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v8, v7, asc_1D5AA, 1LL);
        v10 = 1;
        if ( !v9 )
          v10 = <[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v8, v7, asc_1D5AB, 2LL);
        if ( (unsigned __int8)<core::ops::control_flow::ControlFlow<B,C> as core::ops::try_trait::Try>::branch(v10) )
        {
          v11 = <core::ops::control_flow::ControlFlow<B,C> as core::ops::try_trait::FromResidual>::from_residual();
          goto LABEL_32;
        }
      }
      v11 = <core::ops::control_flow::ControlFlow<B,C> as core::ops::try_trait::Try>::from_output();
LABEL_32:
      LOBYTE(src[0]) = v11;
      if ( (unsigned __int8)<core::ops::control_flow::ControlFlow<B,C> as core::cmp::PartialEq>::eq(src, &unk_1D504) )
      {
        if ( v20 != 0x8000000000000000LL )
        {
          alloc::raw_vec::RawVec<T,A>::current_memory(src, &v20, v12, v20);
          if ( src[1] )
            <alloc::alloc::Global as core::alloc::Allocator>::deallocate(&v22, src[0], src[1], src[2]);
        }
      }
      else
      {
        if ( v20 != 0x8000000000000000LL )
        {
          alloc::raw_vec::RawVec<T,A>::current_memory(src, &v20, v12, v20);
          if ( src[1] )
            <alloc::alloc::Global as core::alloc::Allocator>::deallocate(&v22, src[0], src[1], src[2]);
        }
        std::sys::pal::unix::fs::stat(src);
        if ( src[0] == 2LL )
        {
          dest[1] = src[1];
          dest[0] = 2LL;
        }
        else
        {
          memcpy(dest, src, sizeof(dest));
        }
        std::sys::pal::unix::fs::stat(src);
        v13 = src[0];
        v14 = src[1];
        if ( src[0] != 2LL )
          memcpy(v37, &src[2], sizeof(v37));
        memcpy(v34, dest, 0xB0uLL);
        v34[22] = src[0];
        v34[23] = src[1];
        memcpy(v35, v37, sizeof(v35));
        if ( src[0] == 2LL || v34[0] == 2LL )
        {
          if ( v34[0] == 2LL )
          {
            std::io::error::repr_bitpacked::decode_repr(src, v34[1]);
            if ( LOBYTE(src[0]) >= 3u )
              core::ptr::drop_in_place<alloc::boxed::Box<std::io::error::Custom>>(&src[1]);
          }
          if ( v13 == 2 )
          {
            std::io::error::repr_bitpacked::decode_repr(src, v14);
            if ( LOBYTE(src[0]) >= 3u )
              core::ptr::drop_in_place<alloc::boxed::Box<std::io::error::Custom>>(&src[1]);
          }
        }
        else if ( v34[4] == v35[2] && v34[5] == v35[3] )
        {
          v15 = (_OWORD *)v19;
          *(_QWORD *)(v19 + 16) = v17;
          *v15 = v16;
          return v19;
        }
      }
    }
  }
  std::env::current_dir(v19);
  if ( (_QWORD)v16 != 0x8000000000000000LL )
    <alloc::raw_vec::RawVec<T,A> as core::ops::drop::Drop>::drop(&v16);
  return v19;
}
