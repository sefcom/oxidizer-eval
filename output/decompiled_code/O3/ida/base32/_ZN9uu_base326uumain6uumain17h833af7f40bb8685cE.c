__int64 __fastcall uu_base32::uumain::uumain(int a1, int a2)
{
  __int64 v2; // rbx
  __int64 v4; // [rsp+10h] [rbp-88h] BYREF
  __int64 v5; // [rsp+18h] [rbp-80h]
  __int128 v6; // [rsp+20h] [rbp-78h] BYREF
  __m256i v7; // [rsp+30h] [rbp-68h]
  __int128 v8; // [rsp+58h] [rbp-40h] BYREF
  __m256i v9; // [rsp+68h] [rbp-30h]

  uu_base32::base_common::parse_base_cmd_args(
    (unsigned int)&v6,
    a1,
    a2,
    (unsigned int)"encode/decode data and print to standard output\n"
                  "With no FILE, or when FILE is -, read standard input.\n"
                  "\n"
                  "The data are encoded as described for the base32 alphabet in RFC 4648.\n"
                  "When decoding, the input may contain newlines in addition\n"
                  "to the bytes of the formal base32 alphabet. Use --ignore-garbage\n"
                  "to attempt to recover from any other non-alphabet bytes in the\n"
                  "encoded stream.{} [OPTION]... [FILE]",
    375,
    (unsigned int)"{} [OPTION]... [FILE]",
    21LL);
  v2 = *((_QWORD *)&v6 + 1);
  if ( (_QWORD)v6 != 2LL )
  {
    v9 = v7;
    v8 = v6;
    uu_base32::base_common::get_input(&v6, &v8);
    v2 = *((_QWORD *)&v6 + 1);
    if ( (_QWORD)v6 )
    {
      core::ptr::drop_in_place<uu_base32::base_common::Config>(&v8);
    }
    else
    {
      v4 = *((_QWORD *)&v6 + 1);
      v5 = v7.m256i_i64[0];
      v7 = v9;
      v6 = v8;
      v2 = uu_base32::base_common::handle_input(&v4, 2LL, &v6);
      core::ptr::drop_in_place<alloc::boxed::Box<dyn core::error::Error+core::marker::Sync+core::marker::Send>>(v4, v5);
    }
  }
  return v2;
}
