__int64 __fastcall fd::cli::Opts::normalize_path(__int64 a1, char a2, __int64 a3, __int64 a4)
{
  __int64 v6; // r14
  __int64 v8; // [rsp+8h] [rbp-B0h] BYREF
  __int64 v9; // [rsp+10h] [rbp-A8h]
  __int64 v10; // [rsp+18h] [rbp-A0h]
  _BYTE v11[112]; // [rsp+48h] [rbp-70h] BYREF

  if ( (a2 & 1) != 0 )
  {
    normpath::imp::normalize(v11, a3, a4);
    core::result::Result<T,E>::unwrap(&v8, v11);
    v6 = v9;
    fd::filesystem::absolute_path(v11, v9, v10);
    core::result::Result<T,E>::unwrap(a1, v11);
    return core::ptr::drop_in_place<fd::hyperlink::PathUrl>(v8, v6);
  }
  else
  {
    std::path::Path::components(&v8, a3, a4);
    std::path::Path::components(v11, asc_758CA, 1LL);
    if ( (unsigned __int8)<std::path::Components as core::cmp::PartialEq>::eq(&v8, v11) )
      return <T as alloc::slice::<impl [T]>::to_vec_in::ConvertVec>::to_vec(a1, asc_7A585, 2LL);
    else
      return std::path::Path::to_path_buf(a1, a3, a4);
  }
}