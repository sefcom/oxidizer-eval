__int64 __fastcall fd::exec::CommandTemplate::new(__int64 a1)
{
  char i; // bp
  __int64 v2; // rax
  __int64 v3; // rax
  __int64 v4; // rbx
  __int64 v5; // rax
  __int64 result; // rax
  _OWORD *v7; // rcx
  __int64 v8; // rax
  _QWORD *v9; // rcx
  __int128 v10; // [rsp+8h] [rbp-A0h] BYREF
  __int64 v11; // [rsp+18h] [rbp-90h]
  __int64 v12; // [rsp+20h] [rbp-88h]
  __int128 v13; // [rsp+28h] [rbp-80h] BYREF
  __int64 v14; // [rsp+38h] [rbp-70h]
  __int128 v15; // [rsp+40h] [rbp-68h]
  _QWORD v16[10]; // [rsp+58h] [rbp-50h] BYREF

  v12 = a1;
  *(_QWORD *)&v10 = 0LL;
  *((_QWORD *)&v10 + 1) = 8LL;
  v11 = 0LL;
  <clap_builder::builder::value_parser::ValueParser as core::convert::From<clap_builder::builder::value_parser::_AnonymousValueParser>>::from(&v13);
  for ( i = 0; ; i |= v4 == 0 )
  {
    v2 = <clap_builder::parser::matches::arg_matches::OccurrenceValuesRef<T> as core::iter::traits::iterator::Iterator>::next(&v13);
    if ( !v2 )
      break;
    v3 = <&T as core::convert::AsRef<U>>::as_ref(v2);
    fd::fmt::FormatTemplate::parse(v16, v3);
    v4 = v16[0];
    alloc::vec::Vec<T,A>::push(&v10, v16, &off_402270);
  }
  if ( v11 )
  {
    if ( (i & 1) == 0 )
    {
      v5 = alloc::alloc::Global::alloc_impl(8LL, 24LL);
      if ( !v5 )
        alloc::alloc::handle_alloc_error(8LL, 24LL);
      *(_QWORD *)v5 = 0x8000000000000000LL;
      *(_OWORD *)(v5 + 8) = v13;
      *((_QWORD *)&v13 + 1) = 1LL;
      v14 = v5;
      *(_QWORD *)&v15 = 1LL;
      *(_QWORD *)&v13 = 0LL;
      alloc::vec::Vec<T,A>::push(&v10, &v13, &off_402258);
    }
    result = v11;
    v7 = (_OWORD *)v12;
    *(_QWORD *)(v12 + 16) = v11;
    *v7 = v10;
  }
  else
  {
    *(_QWORD *)&v13 = &off_402248;
    *((_QWORD *)&v13 + 1) = 1LL;
    v14 = 8LL;
    v15 = 0LL;
    v8 = anyhow::__private::format_err(&v13);
    v9 = (_QWORD *)v12;
    *(_QWORD *)(v12 + 8) = v8;
    *v9 = 0x8000000000000000LL;
    return core::ptr::drop_in_place<alloc::vec::Vec<fd::fmt::FormatTemplate>>(&v10);
  }
  return result;
}