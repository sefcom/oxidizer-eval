__int64 __fastcall uu_wc::escape_name_wrapper(__int64 a1, __int64 a2, __int64 a3)
{
  _BOOL8 v4; // [rsp+8h] [rbp-50h] BYREF
  __int128 v5; // [rsp+10h] [rbp-48h]
  __int64 v6; // [rsp+20h] [rbp-38h]
  _BYTE v7[16]; // [rsp+30h] [rbp-28h] BYREF
  __int64 v8; // [rsp+40h] [rbp-18h]

  uucore::features::quoting_style::escape_name(v7, a2, a3, &unk_1A13F);
  alloc::string::String::from_utf8(&v4, v7);
  v8 = *((_QWORD *)&v5 + __OFSUB__(0LL, v4) + 1);
  v5 = *(_OWORD *)(&v4 + __OFSUB__(0LL, v4));
  v6 = v8;
  v4 = !__OFSUB__(0LL, v4);
  core::result::Result<T,E>::expect(a1, &v4, &off_F9300);
  return a1;
}