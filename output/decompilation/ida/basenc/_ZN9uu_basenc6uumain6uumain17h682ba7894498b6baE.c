__int64 __fastcall uu_basenc::uumain::uumain(__int64 a1, __int64 a2)
{
  __int64 v2; // r14
  __int64 v3; // rbx
  unsigned __int8 v4; // bp
  _QWORD v6[2]; // [rsp+0h] [rbp-98h] BYREF
  __int128 v7; // [rsp+10h] [rbp-88h] BYREF
  __m256i v8; // [rsp+20h] [rbp-78h]
  unsigned __int8 v9; // [rsp+40h] [rbp-58h]
  __int128 v10; // [rsp+48h] [rbp-50h] BYREF
  __m256i v11; // [rsp+58h] [rbp-40h]

  uu_basenc::parse_cmd_args((__int64)&v7, a1, a2);
  v2 = *((_QWORD *)&v7 + 1);
  v3 = v8.m256i_i64[0];
  if ( (_QWORD)v7 != 2LL )
  {
    v11 = v8;
    v4 = v9;
    v10 = v7;
    uu_base32::base_common::get_input(&v7, &v10);
    v2 = *((_QWORD *)&v7 + 1);
    if ( (_DWORD)v7 == 1 )
    {
      core::ptr::drop_in_place<uu_base32::base_common::Config>(v3, v11.m256i_i64[1]);
    }
    else
    {
      v6[0] = *((_QWORD *)&v7 + 1);
      v6[1] = v8.m256i_i64[0];
      v8 = v11;
      v7 = v10;
      v2 = ((__int64 (__fastcall *)(_QWORD *, _QWORD, __int128 *))uu_base32::base_common::handle_input)(v6, v4, &v7);
      core::ptr::drop_in_place<alloc::boxed::Box<dyn uu_base32::base_common::ReadSeek>>(v6);
    }
  }
  return v2;
}