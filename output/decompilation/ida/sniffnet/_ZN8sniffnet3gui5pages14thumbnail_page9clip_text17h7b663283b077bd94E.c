__int64 __fastcall sniffnet::gui::pages::thumbnail_page::clip_text(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        unsigned __int64 a4)
{
  __int64 v5; // rax
  __int64 v6; // rdx
  unsigned __int64 v7; // r14
  __int64 v8; // rax
  __int64 v9; // rax
  __int64 v10; // rdx
  const char *v11; // r14
  __int64 v12; // r15
  __int64 v13; // rdx
  __int64 v15; // [rsp+8h] [rbp-80h] BYREF
  __int64 v16; // [rsp+10h] [rbp-78h]
  unsigned __int64 v17; // [rsp+18h] [rbp-70h]
  _BYTE v18[8]; // [rsp+20h] [rbp-68h] BYREF
  __int64 v19; // [rsp+28h] [rbp-60h]
  __int64 v20; // [rsp+30h] [rbp-58h]
  _QWORD v21[4]; // [rsp+38h] [rbp-50h] BYREF
  __int128 v22; // [rsp+58h] [rbp-30h] BYREF
  __int64 v23; // [rsp+68h] [rbp-20h]

  v5 = core::str::<impl str>::trim_matches(a2, a3);
  core::iter::traits::iterator::Iterator::collect(&v15, v5, v5 + v6);
  v7 = v17;
  v8 = core::cmp::Ord::min(a4, v17);
  if ( v7 <= a4 )
  {
    v9 = <core::ops::range::Range<usize> as core::slice::index::SliceIndex<[T]>>::index(v8, v16, v7, &off_2DFF188);
    v11 = (_BYTE *)(&dword_0 + 1);
    v12 = 0LL;
  }
  else
  {
    v9 = <core::ops::range::Range<usize> as core::slice::index::SliceIndex<[T]>>::index(v8 - 2, v16, v7, &off_2DFF1A0);
    v11 = asc_497A9B;
    v12 = 3LL;
  }
  core::iter::traits::iterator::Iterator::collect(v18, v9, v9 + 4 * v10);
  v21[0] = core::str::<impl str>::trim_matches(v19, v20);
  v21[1] = v13;
  v21[2] = v11;
  v21[3] = v12;
  alloc::str::join_generic_copy(&v22, v21, 2LL);
  *(_QWORD *)(a1 + 16) = v23;
  *(_OWORD *)a1 = v22;
  core::ptr::drop_in_place<alloc::string::String>(v18);
  return core::ptr::drop_in_place<alloc::vec::Vec<f32>>(v15, v16);
}