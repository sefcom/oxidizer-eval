__int64 __fastcall uu_basenc::uumain::uumain(__int64 a1, __int64 a2)
{
  __int64 v2; // rbx
  unsigned __int8 v3; // bp
  __int64 v5; // [rsp+0h] [rbp-98h] BYREF
  __int64 v6; // [rsp+8h] [rbp-90h]
  __int128 v7; // [rsp+10h] [rbp-88h] BYREF
  __m256i v8; // [rsp+20h] [rbp-78h]
  unsigned __int8 v9; // [rsp+40h] [rbp-58h]
  __int128 v10; // [rsp+50h] [rbp-48h] BYREF
  __m256i v11; // [rsp+60h] [rbp-38h]

  uu_basenc::parse_cmd_args((__int64)&v7, a1, a2);
  v2 = *((_QWORD *)&v7 + 1);
  if ( (_QWORD)v7 != 2LL )
  {
    v11 = v8;
    v3 = v9;
    v10 = v7;
    uu_base32::base_common::get_input(&v7, &v10);
    v2 = *((_QWORD *)&v7 + 1);
    if ( (_QWORD)v7 )
    {
      core::ptr::drop_in_place<uu_base32::base_common::Config>(&v10);
    }
    else
    {
      v5 = *((_QWORD *)&v7 + 1);
      v6 = v8.m256i_i64[0];
      v8 = v11;
      v7 = v10;
      v2 = uu_base32::base_common::handle_input(&v5, v3, &v7);
      core::ptr::drop_in_place<alloc::boxed::Box<dyn clap_builder::builder::value_parser::AnyValueParser>>(v5, v6);
    }
  }
  return v2;
}
