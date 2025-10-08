__int64 __fastcall uu_chmod::Chmoder::change_file(
        _BYTE *a1,
        __int64 a2,
        unsigned int a3,
        __int64 a4,
        __int64 a5,
        __int64 a6)
{
  int v6; // ebx
  unsigned int v9; // r12d
  __int64 v11; // rax
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // r9
  __int64 (__fastcall *v15)(); // rdx
  __int64 v16; // rcx
  __int64 v17; // r8
  __int64 v18; // r9
  __int64 v19; // rcx
  __int64 v20; // r8
  __int64 v21; // r9
  __int64 v22; // rcx
  __int64 v23; // r8
  __int64 v24; // r9
  unsigned __int64 v26; // [rsp+0h] [rbp-108h] BYREF
  char ***v27; // [rsp+8h] [rbp-100h] BYREF
  __int64 (__fastcall *v28)(); // [rsp+10h] [rbp-F8h]
  __int64 v29; // [rsp+18h] [rbp-F0h]
  char v30; // [rsp+20h] [rbp-E8h]
  char **v31; // [rsp+28h] [rbp-E0h] BYREF
  __int64 (__fastcall *v32)(); // [rsp+30h] [rbp-D8h]
  char *****v33; // [rsp+38h] [rbp-D0h]
  __int64 v34; // [rsp+40h] [rbp-C8h]
  void *v35; // [rsp+48h] [rbp-C0h]
  __int64 v36; // [rsp+50h] [rbp-B8h]
  char ****v37; // [rsp+58h] [rbp-B0h] BYREF
  __int64 (__fastcall *v38)(); // [rsp+60h] [rbp-A8h]
  unsigned __int64 *v39; // [rsp+68h] [rbp-A0h]
  __int64 (__fastcall *v40)(); // [rsp+70h] [rbp-98h]
  _BYTE *v41; // [rsp+78h] [rbp-90h]
  __int64 (__fastcall *v42)(); // [rsp+80h] [rbp-88h]
  char *v43; // [rsp+88h] [rbp-80h]
  __int64 (__fastcall *v44)(); // [rsp+90h] [rbp-78h]
  _BYTE *v45; // [rsp+98h] [rbp-70h]
  __int64 (__fastcall *v46)(); // [rsp+A0h] [rbp-68h]
  __int64 v47; // [rsp+A8h] [rbp-60h] BYREF
  _BYTE v48[24]; // [rsp+B0h] [rbp-58h] BYREF
  _BYTE v49[64]; // [rsp+C8h] [rbp-40h] BYREF

  v6 = a5;
  v26 = __PAIR64__(a3, a2);
  if ( (_DWORD)a2 == a3 )
  {
    v9 = 0;
    if ( a1[34] && !a1[32] )
    {
      v30 = 1;
      v9 = 0;
      uucore::features::fs::display_permissions_unix(v48, a2, 0LL, a4, a5, a6, v26, 1LL, a4, a5);
      v37 = &v27;
      v38 = <os_display::Quoted as core::fmt::Display>::fmt;
      v39 = &v26;
      v40 = core::fmt::num::<impl core::fmt::Octal for u32>::fmt;
      v41 = v48;
      v42 = <alloc::string::String as core::fmt::Display>::fmt;
      v31 = &off_EBC10;
      v32 = (__int64 (__fastcall *)())&byte_4;
      v35 = &unk_1A2F0;
      v36 = 3LL;
      v33 = &v37;
      v34 = 3LL;
      std::io::stdio::_print(&v31);
      core::ptr::drop_in_place<alloc::string::String>(v48);
    }
  }
  else
  {
    v11 = std::fs::set_permissions(a4, a5);
    if ( v11 )
    {
      v47 = v11;
      if ( !a1[33] )
      {
        v31 = (char **)uucore::util_name(a4);
        v32 = v15;
        v27 = &v31;
        v28 = <&T as core::fmt::Display>::fmt;
        v37 = (char ****)&unk_EBAB0;
        v38 = (__int64 (__fastcall *)())(&dword_0 + 2);
        v41 = 0LL;
        v39 = (unsigned __int64 *)&v27;
        v40 = (__int64 (__fastcall *)())(&dword_0 + 1);
        std::io::stdio::_eprint(&v37);
        v31 = (char **)&v47;
        v32 = <std::io::error::Error as core::fmt::Display>::fmt;
        v37 = (char ****)&unk_EBB30;
        v38 = (__int64 (__fastcall *)())(&dword_0 + 2);
        v41 = 0LL;
        v39 = (unsigned __int64 *)&v31;
        v40 = (__int64 (__fastcall *)())(&dword_0 + 1);
        std::io::stdio::_eprint(&v37);
      }
      if ( a1[34] )
      {
        v30 = 1;
        uucore::features::fs::display_permissions_unix(v49, (unsigned int)v26, 0LL, v12, v13, v14, v26, 1LL, a4, v6);
        uucore::features::fs::display_permissions_unix(v48, HIDWORD(v26), 0LL, v16, v17, v18, v26, v27, v28, v29);
        v37 = &v27;
        v38 = <os_display::Quoted as core::fmt::Display>::fmt;
        v39 = &v26;
        v40 = core::fmt::num::<impl core::fmt::Octal for u32>::fmt;
        v41 = v49;
        v42 = <alloc::string::String as core::fmt::Display>::fmt;
        v43 = (char *)&v26 + 4;
        v44 = core::fmt::num::<impl core::fmt::Octal for u32>::fmt;
        v45 = v48;
        v46 = <alloc::string::String as core::fmt::Display>::fmt;
        v31 = &off_EBB50;
        v32 = (__int64 (__fastcall *)())&byte_6;
        v35 = &unk_1A1E0;
        v36 = 5LL;
        v33 = &v37;
        v34 = 5LL;
        std::io::stdio::_print(&v31);
        core::ptr::drop_in_place<alloc::string::String>(v48);
        core::ptr::drop_in_place<alloc::string::String>(v49);
      }
      core::ptr::drop_in_place<std::io::error::Error>(v47);
      return 1;
    }
    else
    {
      v9 = 0;
      core::ptr::drop_in_place<core::result::Result<(),std::io::error::Error>>(0LL);
      if ( a1[34] || a1[32] == 1 )
      {
        v30 = 1;
        uucore::features::fs::display_permissions_unix(v49, (unsigned int)a2, 0LL, v19, v20, v21, v26, 1LL, a4, v6);
        uucore::features::fs::display_permissions_unix(v48, HIDWORD(v26), 0LL, v22, v23, v24, v26, v27, v28, v29);
        v37 = &v27;
        v38 = <os_display::Quoted as core::fmt::Display>::fmt;
        v39 = &v26;
        v40 = core::fmt::num::<impl core::fmt::Octal for u32>::fmt;
        v41 = v49;
        v42 = <alloc::string::String as core::fmt::Display>::fmt;
        v43 = (char *)&v26 + 4;
        v44 = core::fmt::num::<impl core::fmt::Octal for u32>::fmt;
        v45 = v48;
        v46 = <alloc::string::String as core::fmt::Display>::fmt;
        v31 = &off_EBBB0;
        v32 = (__int64 (__fastcall *)())&byte_6;
        v35 = &unk_1A1E0;
        v36 = 5LL;
        v33 = &v37;
        v34 = 5LL;
        std::io::stdio::_print(&v31);
        core::ptr::drop_in_place<alloc::string::String>(v48);
        core::ptr::drop_in_place<alloc::string::String>(v49);
        return 0;
      }
    }
  }
  return v9;
}