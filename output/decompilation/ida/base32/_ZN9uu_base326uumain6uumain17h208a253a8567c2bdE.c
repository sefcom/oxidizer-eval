__int64 __fastcall uu_base32::uumain::uumain(__int64 a1, __int64 a2)
{
  __int64 v2; // r14
  __int64 v3; // rbx
  _QWORD v5[2]; // [rsp+0h] [rbp-88h] BYREF
  __int128 v6; // [rsp+10h] [rbp-78h] BYREF
  __m256i v7; // [rsp+20h] [rbp-68h]
  __int128 v8; // [rsp+40h] [rbp-48h] BYREF
  __m256i v9; // [rsp+50h] [rbp-38h]

  uu_base32::base_common::parse_base_cmd_args(&v6, a1, a2);
  v2 = *((_QWORD *)&v6 + 1);
  v3 = v7.m256i_i64[0];
  if ( (_QWORD)v6 != 2LL )
  {
    v9 = v7;
    v8 = v6;
    uu_base32::base_common::get_input(&v6, &v8);
    v2 = *((_QWORD *)&v6 + 1);
    if ( (_DWORD)v6 == 1 )
    {
      core::ptr::drop_in_place<uu_base32::base_common::Config>(v3, v9.m256i_i64[1]);
    }
    else
    {
      v5[0] = *((_QWORD *)&v6 + 1);
      v5[1] = v7.m256i_i64[0];
      v7 = v9;
      v6 = v8;
      v2 = uu_base32::base_common::handle_input(v5, (__int64)&v6);
      core::ptr::drop_in_place<alloc::boxed::Box<dyn uu_base32::base_common::ReadSeek>>(v5);
    }
  }
  return v2;
}