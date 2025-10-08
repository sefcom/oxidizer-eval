__int64 __fastcall uu_chcon::emit_cycle_warning(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  __int64 v5; // rdx
  __int64 *v7; // [rsp+0h] [rbp-88h] BYREF
  __int64 (__fastcall *v8)(); // [rsp+8h] [rbp-80h]
  char **v9; // [rsp+10h] [rbp-78h] BYREF
  __int64 v10; // [rsp+18h] [rbp-70h]
  __int64 **v11; // [rsp+20h] [rbp-68h]
  __int64 v12; // [rsp+28h] [rbp-60h]
  __int64 v13; // [rsp+30h] [rbp-58h]
  __int64 v14; // [rsp+40h] [rbp-48h] BYREF
  __int64 v15; // [rsp+48h] [rbp-40h]
  __int64 v16; // [rsp+50h] [rbp-38h]
  char v17; // [rsp+58h] [rbp-30h]

  v14 = uucore::util_name(a1, a2, a3, a4, a5);
  v15 = v5;
  v7 = &v14;
  v8 = <&T as core::fmt::Display>::fmt;
  v9 = (char **)&unk_F04A0;
  v10 = 2LL;
  v13 = 0LL;
  v11 = &v7;
  v12 = 1LL;
  std::io::stdio::_eprint(&v9);
  v14 = 1LL;
  v15 = a1;
  v16 = a2;
  v17 = 1;
  v7 = &v14;
  v8 = <os_display::Quoted as core::fmt::Display>::fmt;
  v9 = &off_F0510;
  v10 = 2LL;
  v13 = 0LL;
  v11 = &v7;
  v12 = 1LL;
  return std::io::stdio::_eprint(&v9);
}