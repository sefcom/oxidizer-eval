__int64 __fastcall uu_chcon::root_dev_ino_warn(__int64 (__fastcall *a1)(), __int64 a2)
{
  __int64 v2; // rdx
  __int64 v3; // rcx
  __int64 v4; // r8
  __int64 (__fastcall *v5)(); // rdx
  __int64 (__fastcall *v7)(); // rdx
  char **v8; // [rsp+8h] [rbp-A0h] BYREF
  __int64 v9; // [rsp+10h] [rbp-98h]
  char ****v10; // [rsp+18h] [rbp-90h]
  __int64 v11; // [rsp+20h] [rbp-88h]
  __int64 v12; // [rsp+28h] [rbp-80h]
  char **v13; // [rsp+38h] [rbp-70h] BYREF
  __int64 (__fastcall *v14)(); // [rsp+40h] [rbp-68h]
  __int64 v15; // [rsp+48h] [rbp-60h]
  char v16; // [rsp+50h] [rbp-58h]
  char ***v17; // [rsp+58h] [rbp-50h] BYREF
  __int64 (__fastcall *v18)(); // [rsp+60h] [rbp-48h]
  char **v19; // [rsp+68h] [rbp-40h]
  __int64 (__fastcall *v20)(); // [rsp+70h] [rbp-38h]

  if ( (unsigned __int8)<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(a1, a2, asc_1B911, 1LL) )
  {
    v13 = (char **)uucore::util_name(a1, a2, v2, v3, v4);
    v14 = v5;
    v17 = &v13;
    v18 = <&T as core::fmt::Display>::fmt;
    v8 = (char **)&unk_F04A0;
    v9 = 2LL;
    v12 = 0LL;
    v10 = &v17;
    v11 = 1LL;
    std::io::stdio::_eprint(&v8);
    v13 = &uu_chcon::options::preserve_root::NO_PRESERVE_ROOT;
    v14 = <&T as core::fmt::Display>::fmt;
    v8 = &off_F04C0;
    v9 = 2LL;
    v12 = 0LL;
    v10 = (char ****)&v13;
    v11 = 1LL;
  }
  else
  {
    v13 = (char **)uucore::util_name(a1, a2, v2, v3, v4);
    v14 = v7;
    v17 = &v13;
    v18 = <&T as core::fmt::Display>::fmt;
    v8 = (char **)&unk_F04A0;
    v9 = 2LL;
    v12 = 0LL;
    v10 = &v17;
    v11 = 1LL;
    std::io::stdio::_eprint(&v8);
    v13 = (char **)(&dword_0 + 1);
    v14 = a1;
    v15 = a2;
    v16 = 1;
    v17 = &v13;
    v18 = <os_display::Quoted as core::fmt::Display>::fmt;
    v19 = &uu_chcon::options::preserve_root::NO_PRESERVE_ROOT;
    v20 = <&T as core::fmt::Display>::fmt;
    v8 = &off_F04E0;
    v9 = 3LL;
    v12 = 0LL;
    v10 = &v17;
    v11 = 2LL;
  }
  return std::io::stdio::_eprint(&v8);
}