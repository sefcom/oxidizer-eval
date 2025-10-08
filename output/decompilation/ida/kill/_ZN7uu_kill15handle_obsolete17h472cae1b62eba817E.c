__int64 __fastcall uu_kill::handle_obsolete(__int64 a1)
{
  __int64 v1; // rax
  __int64 v2; // r14
  __int64 v3; // r15
  __int64 v4; // rax
  __int64 v5; // rax
  __int64 v6; // rdx
  __int64 v7; // r14
  __int64 v8; // r15
  unsigned int v9; // edx
  __int64 v11; // [rsp+8h] [rbp-30h] BYREF
  __int64 v12; // [rsp+10h] [rbp-28h]

  if ( *(_QWORD *)(a1 + 16) < 3uLL )
    return 0LL;
  v1 = *(_QWORD *)(a1 + 8);
  v2 = *(_QWORD *)(v1 + 32);
  v3 = *(_QWORD *)(v1 + 40);
  LODWORD(v11) = 0;
  v4 = core::char::methods::encode_utf8_raw(&v11);
  v5 = <&str as core::str::pattern::Pattern>::strip_prefix_of(v4, v2, v3);
  if ( !v5 )
    return 0LL;
  v7 = v5;
  v8 = v6;
  v11 = v5;
  v12 = v6 + v5;
  if ( (core::str::validations::next_code_point(&v11) & 1) != 0
    && (v9 - 97 < 0x1A || v9 >= 0x80 && (unsigned __int8)core::unicode::unicode_data::lowercase::lookup(v9)) )
  {
    return 0LL;
  }
  if ( uucore::features::signals::signal_by_name_or_value(v7, v8) != 1 )
    return 0LL;
  alloc::vec::Vec<T,A>::remove(&v11, a1);
  core::ptr::drop_in_place<alloc::string::String>(v11, v12);
  return 1LL;
}