__int64 __fastcall alacritty::display::Display::format_search(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        unsigned __int64 a5,
        unsigned __int64 a6)
{
  __int64 v9; // rax
  __int64 result; // rax
  __int128 v11; // xmm0
  __int128 v13; // [rsp+8h] [rbp-70h] BYREF
  __int64 v14; // [rsp+18h] [rbp-60h]
  __int128 v15; // [rsp+20h] [rbp-58h] BYREF
  __int64 v16; // [rsp+30h] [rbp-48h]

  if ( a5 <= a6 )
  {
    <T as alloc::slice::<impl [T]>::to_vec_in::ConvertVec>::to_vec(&v13, a4);
    alacritty::string::StrShortener::new(&v15, a2, a3, ~a5 + a6, 0LL);
    <alloc::string::String as core::iter::traits::collect::Extend<char>>::extend(&v13, &v15);
    alloc::string::String::push(&v13, 32LL);
    result = v14;
    *(_QWORD *)(a1 + 16) = v14;
    v11 = v13;
  }
  else
  {
    v9 = core::str::traits::<impl core::slice::index::SliceIndex<str> for core::ops::range::RangeTo<usize>>::get(
           a6,
           a4,
           a5);
    if ( !v9 )
      core::str::slice_error_fail(a4, a5, 0LL, a6, &off_882728);
    <T as alloc::slice::<impl [T]>::to_vec_in::ConvertVec>::to_vec(&v15, v9);
    result = v16;
    *(_QWORD *)(a1 + 16) = v16;
    v11 = v15;
  }
  *(_OWORD *)a1 = v11;
  return result;
}