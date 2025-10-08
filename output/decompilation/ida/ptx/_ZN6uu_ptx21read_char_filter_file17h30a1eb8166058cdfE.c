__int64 __fastcall uu_ptx::read_char_filter_file(__int64 a1)
{
  __int64 v1; // rax
  __int64 v2; // r14
  __int64 v3; // rax
  __int64 v4; // r15
  __int64 (__fastcall **v5)(); // r14
  __int64 result; // rax
  __int64 v7; // rdx
  __int128 v8; // xmm0
  __int128 v9; // xmm1
  __int64 v10; // [rsp+8h] [rbp-60h] BYREF
  __int64 v11; // [rsp+10h] [rbp-58h]
  __int64 v12; // [rsp+18h] [rbp-50h]
  _OWORD v13[4]; // [rsp+20h] [rbp-48h] BYREF

  clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(v13);
  v1 = clap_builder::parser::error::MatchesError::unwrap(aBreakFile, 10LL, v13);
  if ( !v1 )
    core::option::expect_failed(aParsingOptions, 23LL, &off_251730);
  v2 = v1;
  if ( (unsigned __int8)<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(
                          *(_QWORD *)(v1 + 8),
                          *(_QWORD *)(v1 + 16),
                          asc_55AD1,
                          1LL) )
  {
    v3 = std::io::stdio::stdin();
    v4 = alloc::boxed::Box<T>::new(v3);
    v5 = (__int64 (__fastcall **)())&unk_2516D8;
  }
  else
  {
    std::fs::File::open(v13, v2);
    if ( (v13[0] & 1) != 0 )
    {
      result = *((_QWORD *)&v13[0] + 1);
      *(_QWORD *)(a1 + 8) = *((_QWORD *)&v13[0] + 1);
      *(_QWORD *)a1 = 0LL;
      return result;
    }
    v4 = alloc::boxed::Box<T>::new(DWORD1(v13[0]));
    v5 = &off_251680;
  }
  v10 = 0LL;
  v11 = 1LL;
  v12 = 0LL;
  if ( (((__int64 (__fastcall *)(__int64, __int64 *))v5[7])(v4, &v10) & 1) != 0 )
  {
    *(_QWORD *)(a1 + 8) = v7;
    *(_QWORD *)a1 = 0LL;
  }
  else
  {
    core::iter::traits::iterator::Iterator::collect(v13, v11, v11 + v12);
    v8 = v13[0];
    v9 = v13[1];
    *(_OWORD *)(a1 + 32) = v13[2];
    *(_OWORD *)(a1 + 16) = v9;
    *(_OWORD *)a1 = v8;
  }
  core::ptr::drop_in_place<alloc::string::String>(&v10);
  return core::ptr::drop_in_place<alloc::boxed::Box<dyn clap_builder::builder::value_parser::AnyValueParser>>(v4, v5);
}