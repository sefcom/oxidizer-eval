__int64 __fastcall turbo_trace::tracer::Tracer::new(__int64 a1, __int64 a2, __int64 a3, _QWORD *a4)
{
  __int64 v5; // rax
  __int64 result; // rax
  __int128 v7; // [rsp+0h] [rbp-218h]
  __int64 v8; // [rsp+10h] [rbp-208h]
  __int128 v9; // [rsp+18h] [rbp-200h]
  __int128 v10; // [rsp+30h] [rbp-1E8h] BYREF
  __int64 v11; // [rsp+40h] [rbp-1D8h]
  __int128 v12; // [rsp+48h] [rbp-1D0h] BYREF
  _QWORD dest[26]; // [rsp+58h] [rbp-1C0h] BYREF
  _BYTE src[240]; // [rsp+128h] [rbp-F0h] BYREF

  if ( __OFSUB__(0LL, *a4) )
  {
    *(_QWORD *)&v7 = 0x8000000000000000LL;
  }
  else
  {
    turbopath::absolute_system_path_buf::AbsoluteSystemPathBuf::from_unknown(
      &v12,
      *(_QWORD *)(a2 + 8),
      *(_QWORD *)(a2 + 16));
    v8 = dest[0];
    v7 = v12;
  }
  <alloc::vec::Vec<T,A> as core::iter::traits::collect::IntoIterator>::into_iter(&v12, a3);
  core::iter::traits::iterator::Iterator::collect(&v10, &v12);
  *(_QWORD *)&v9 = 0LL;
  *((_QWORD *)&v9 + 1) = 8LL;
  <swc_common::source_map::SourceMap as core::default::Default>::default(src);
  *(_QWORD *)&v12 = 1LL;
  *((_QWORD *)&v12 + 1) = 1LL;
  memcpy(dest, src, sizeof(dest));
  v5 = alloc::boxed::Box<T>::new(&v12);
  *(_QWORD *)(a1 + 16) = v11;
  *(_OWORD *)a1 = v10;
  *(_OWORD *)(a1 + 72) = v7;
  *(_QWORD *)(a1 + 88) = v8;
  *(_QWORD *)(a1 + 96) = v5;
  *(_QWORD *)(a1 + 40) = *(_QWORD *)(a2 + 16);
  *(_OWORD *)(a1 + 24) = *(_OWORD *)a2;
  *(_OWORD *)(a1 + 48) = v9;
  result = 0LL;
  *(_QWORD *)(a1 + 64) = 0LL;
  *(_BYTE *)(a1 + 104) = 0;
  return result;
}