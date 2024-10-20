__int64 __fastcall uu_df::uumain::uumain::{{closure}}(__int64 a1, __int64 a2)
{
  __int64 v3; // [rsp+10h] [rbp-108h]
  unsigned int v4; // [rsp+1Ch] [rbp-FCh]
  _QWORD v5[2]; // [rsp+20h] [rbp-F8h] BYREF
  _QWORD v6[2]; // [rsp+30h] [rbp-E8h] BYREF
  _QWORD v7[3]; // [rsp+40h] [rbp-D8h] BYREF
  _QWORD v8[3]; // [rsp+58h] [rbp-C0h] BYREF
  _BYTE v9[48]; // [rsp+70h] [rbp-A8h] BYREF
  _OWORD v10[2]; // [rsp+A0h] [rbp-78h] BYREF
  __int128 v11; // [rsp+C8h] [rbp-50h]
  __int128 v12; // [rsp+D8h] [rbp-40h]
  _QWORD *v13; // [rsp+F8h] [rbp-20h]
  __int64 (__fastcall *v14)(); // [rsp+100h] [rbp-18h]
  _QWORD *v15; // [rsp+108h] [rbp-10h]
  __int64 (__fastcall *v16)(); // [rsp+110h] [rbp-8h]

  v5[0] = a1;
  v5[1] = a2;
  v6[0] = aCannotReadTabl;
  v6[1] = 41LL;
  v4 = (*(__int64 (__fastcall **)(__int64))(a2 + 96))(a1);
  v13 = v6;
  v14 = <&T as core::fmt::Display>::fmt;
  *(_QWORD *)&v11 = v6;
  *((_QWORD *)&v11 + 1) = <&T as core::fmt::Display>::fmt;
  v15 = v5;
  v16 = <alloc::boxed::Box<T,A> as core::fmt::Display>::fmt;
  *(_QWORD *)&v12 = v5;
  *((_QWORD *)&v12 + 1) = <alloc::boxed::Box<T,A> as core::fmt::Display>::fmt;
  v10[0] = v11;
  v10[1] = v12;
  core::fmt::Arguments::new_v1(v9, &unk_128888, v10);
  alloc::fmt::format(v8, v9);
  v7[0] = v8[0];
  v7[1] = v8[1];
  v7[2] = v8[2];
  v3 = uucore::mods::error::USimpleError::new(v4, v7);
  core::ptr::drop_in_place<alloc::boxed::Box<dyn uucore::mods::error::UError>>(v5);
  return v3;
}
