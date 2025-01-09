__int64 __fastcall uu_head::uumain::uumain(__int64 a1, __int64 a2)
{
  __int64 v2; // rbx
  __int128 v4; // [rsp+0h] [rbp-368h] BYREF
  __int64 v5; // [rsp+10h] [rbp-358h]
  int v6; // [rsp+18h] [rbp-350h]
  __m256i v7; // [rsp+20h] [rbp-348h] BYREF
  __int128 v8; // [rsp+40h] [rbp-328h]
  __int64 v9; // [rsp+50h] [rbp-318h]
  __m256i v10; // [rsp+58h] [rbp-310h] BYREF
  __int128 v11; // [rsp+78h] [rbp-2F0h]
  __int64 v12; // [rsp+88h] [rbp-2E0h]
  __m256i v13; // [rsp+90h] [rbp-2D8h] BYREF
  __int128 v14; // [rsp+B0h] [rbp-2B8h]

  uu_head::uu_app(&v13);
  uu_head::arg_iterate(&v4, a1, a2);
  v2 = *((_QWORD *)&v4 + 1);
  if ( (_QWORD)v4 )
  {
    core::ptr::drop_in_place<clap_builder::builder::command::Command>(&v13);
  }
  else
  {
    clap_builder::builder::command::Command::try_get_matches_from(&v7, &v13, *((_QWORD *)&v4 + 1), v5);
    if ( v7.m256i_i64[0] == 0x8000000000000000LL )
    {
      return uucore::mods::error::<impl core::convert::From<clap_builder::error::Error> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(v7.m256i_i64[1]);
    }
    else
    {
      v12 = v9;
      v11 = v8;
      v10 = v7;
      uu_head::HeadOptions::get_from((__int64)&v13, (__int64)&v10);
      if ( v13.m256i_i32[0] == 4 )
      {
        v5 = v13.m256i_i64[3];
        v4 = *(_OWORD *)&v13.m256i_u64[1];
        v6 = 1;
        v2 = alloc::boxed::Box<T>::new(&v4);
      }
      else
      {
        v8 = v14;
        v7 = v13;
        v2 = uu_head::uu_head((__int64)&v7);
        core::ptr::drop_in_place<uu_head::HeadOptions>(&v7);
      }
      core::ptr::drop_in_place<clap_builder::parser::matches::arg_matches::ArgMatches>(&v10);
    }
  }
  return v2;
}
