__int64 __fastcall uu_head::uumain::uumain(__int64 a1, __int64 a2)
{
  __int64 v3; // rbx
  __int64 v4; // rbx
  unsigned __int64 v5; // [rsp+0h] [rbp-368h] BYREF
  __int128 v6; // [rsp+8h] [rbp-360h]
  __int64 v7; // [rsp+18h] [rbp-350h]
  __m256i v8; // [rsp+20h] [rbp-348h] BYREF
  __int128 v9; // [rsp+40h] [rbp-328h]
  __int64 v10; // [rsp+50h] [rbp-318h]
  __m256i v11; // [rsp+58h] [rbp-310h] BYREF
  __int128 v12; // [rsp+78h] [rbp-2F0h]
  __int64 v13; // [rsp+88h] [rbp-2E0h]
  __m256i dest; // [rsp+90h] [rbp-2D8h] BYREF
  __int128 v15; // [rsp+B0h] [rbp-2B8h]

  uu_head::uu_app(&dest);
  uu_head::arg_iterate(&v5, a1, a2);
  if ( v5 != 0x8000000000000005LL )
  {
    v3 = alloc::boxed::Box<T>::new(&v5);
    core::ptr::drop_in_place<clap_builder::builder::command::Command>(&dest);
    return v3;
  }
  clap_builder::builder::command::Command::try_get_matches_from(&v8, &dest, v6, *((_QWORD *)&v6 + 1));
  if ( v8.m256i_i64[0] == 0x8000000000000000LL )
    return uucore::mods::error::<impl core::convert::From<clap_builder::error::Error> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(v8.m256i_i64[1]);
  v13 = v10;
  v12 = v9;
  v11 = v8;
  uu_head::HeadOptions::get_from(&dest, &v11);
  if ( dest.m256i_i32[0] == 4 )
  {
    v7 = dest.m256i_i64[3];
    v6 = *(_OWORD *)&dest.m256i_u64[1];
    v5 = 0x8000000000000004LL;
    v3 = alloc::boxed::Box<T>::new(&v5);
    core::ptr::drop_in_place<clap_builder::parser::matches::arg_matches::ArgMatches>(&v11);
    return v3;
  }
  v9 = v15;
  v8 = dest;
  v4 = uu_head::uu_head(&v8);
  core::ptr::drop_in_place<uu_head::HeadOptions>(&v8);
  core::ptr::drop_in_place<clap_builder::parser::matches::arg_matches::ArgMatches>(&v11);
  return v4;
}