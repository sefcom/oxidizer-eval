__int64 __fastcall uu_pinky::platform::unix::Pinky::print_heading(_BYTE *a1)
{
  char **v2; // [rsp+8h] [rbp-60h] BYREF
  __int64 v3; // [rsp+10h] [rbp-58h]
  char ***v4; // [rsp+18h] [rbp-50h]
  __int128 v5; // [rsp+20h] [rbp-48h]
  __int64 v6; // [rsp+30h] [rbp-38h]
  char **v7; // [rsp+38h] [rbp-30h] BYREF
  __int64 (__fastcall *v8)(); // [rsp+40h] [rbp-28h]

  v7 = &off_F8FD0;
  v8 = <&T as core::fmt::Display>::fmt;
  v2 = (char **)&unk_19240;
  v3 = 1LL;
  *((_QWORD *)&v5 + 1) = &unk_1A7B0;
  v6 = 1LL;
  v4 = &v7;
  *(_QWORD *)&v5 = 1LL;
  std::io::stdio::_print(&v2);
  if ( a1[26] )
  {
    v7 = &off_F8FE0;
    v8 = <&T as core::fmt::Display>::fmt;
    v2 = (char **)&off_F8F60;
    v3 = 1LL;
    *((_QWORD *)&v5 + 1) = &unk_1A7E0;
    v6 = 1LL;
    v4 = &v7;
    *(_QWORD *)&v5 = 1LL;
    std::io::stdio::_print(&v2);
  }
  v7 = &off_F8FF0;
  v8 = <&T as core::fmt::Display>::fmt;
  v2 = (char **)&off_F8F60;
  v3 = 1LL;
  *((_QWORD *)&v5 + 1) = &unk_1A810;
  v6 = 1LL;
  v4 = &v7;
  *(_QWORD *)&v5 = 1LL;
  std::io::stdio::_print(&v2);
  if ( a1[24] )
  {
    v7 = &off_F9000;
    v8 = <&T as core::fmt::Display>::fmt;
    v2 = (char **)&off_F8F60;
    v3 = 1LL;
    *((_QWORD *)&v5 + 1) = &unk_1A770;
    v6 = 1LL;
    v4 = &v7;
    *(_QWORD *)&v5 = 1LL;
    std::io::stdio::_print(&v2);
  }
  v7 = &off_F9010;
  v8 = <&T as core::fmt::Display>::fmt;
  v2 = (char **)&off_F8F60;
  v3 = 1LL;
  *((_QWORD *)&v5 + 1) = &unk_1A840;
  v6 = 1LL;
  v4 = &v7;
  *(_QWORD *)&v5 = 1LL;
  std::io::stdio::_print(&v2);
  if ( a1[29] )
  {
    v2 = &off_F8FC0;
    v3 = 1LL;
    v4 = (char ***)&byte_8;
    v5 = 0LL;
    std::io::stdio::_print(&v2);
  }
  v2 = (char **)&off_F8F70;
  v3 = 1LL;
  v4 = (char ***)&byte_8;
  v5 = 0LL;
  return std::io::stdio::_print(&v2);
}