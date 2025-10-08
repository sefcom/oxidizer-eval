__int64 __fastcall sniffnet::gui::styles::types::color_remote::serialize_color(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 (__fastcall *v4)(); // rdx
  unsigned int v6; // [rsp+Ch] [rbp-9Ch] BYREF
  void *v7; // [rsp+10h] [rbp-98h] BYREF
  __int64 v8; // [rsp+18h] [rbp-90h]
  unsigned int **v9; // [rsp+20h] [rbp-88h]
  __int64 v10; // [rsp+28h] [rbp-80h]
  void *v11; // [rsp+30h] [rbp-78h]
  __int64 v12; // [rsp+38h] [rbp-70h]
  _BYTE v13[8]; // [rsp+40h] [rbp-68h] BYREF
  __int64 v14; // [rsp+48h] [rbp-60h]
  __int64 v15; // [rsp+50h] [rbp-58h]
  unsigned int *v16; // [rsp+58h] [rbp-50h] BYREF
  __int64 (__fastcall *v17)(); // [rsp+60h] [rbp-48h]
  char *v18; // [rsp+68h] [rbp-40h]
  __int64 (__fastcall *v19)(); // [rsp+70h] [rbp-38h]
  char *v20; // [rsp+78h] [rbp-30h]
  __int64 (__fastcall *v21)(); // [rsp+80h] [rbp-28h]
  char *v22; // [rsp+88h] [rbp-20h]
  __int64 (__fastcall *v23)(); // [rsp+90h] [rbp-18h]

  v6 = iced_core::color::Color::into_rgba8(a2);
  if ( v6 < 0xFF000000 )
  {
    v4 = (__int64 (__fastcall *)())((char *)&v6 + 2);
    v16 = &v6;
    v17 = core::fmt::num::<impl core::fmt::LowerHex for u8>::fmt;
    v18 = (char *)&v6 + 1;
    v19 = core::fmt::num::<impl core::fmt::LowerHex for u8>::fmt;
    v20 = (char *)&v6 + 2;
    v21 = core::fmt::num::<impl core::fmt::LowerHex for u8>::fmt;
    v22 = (char *)&v6 + 3;
    v23 = core::fmt::num::<impl core::fmt::LowerHex for u8>::fmt;
    v7 = &off_2DFF2E8;
    v8 = 4LL;
    v11 = &unk_18380B8;
    v12 = 4LL;
    v9 = &v16;
    v10 = 4LL;
  }
  else
  {
    v16 = &v6;
    v4 = core::fmt::num::<impl core::fmt::LowerHex for u8>::fmt;
    v17 = core::fmt::num::<impl core::fmt::LowerHex for u8>::fmt;
    v18 = (char *)&v6 + 1;
    v19 = core::fmt::num::<impl core::fmt::LowerHex for u8>::fmt;
    v20 = (char *)&v6 + 2;
    v21 = core::fmt::num::<impl core::fmt::LowerHex for u8>::fmt;
    v7 = &off_2DFF2B8;
    v8 = 3LL;
    v11 = &unk_1838028;
    v12 = 3LL;
    v9 = &v16;
    v10 = 3LL;
  }
  core::option::Option<T>::map_or_else(v13, 0LL, v4, &v7);
  <toml_edit::ser::map::MapValueSerializer as serde_core::ser::Serializer>::serialize_str(a1, a3, v14, v15);
  return core::ptr::drop_in_place<alloc::string::String>(v13);
}