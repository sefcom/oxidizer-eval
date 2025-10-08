__int64 __fastcall uu_chroot::name_to_gid(int *a1, __int64 a2, __int64 a3)
{
  __int64 v4; // rax
  int v5; // ecx
  int v6; // ebp
  _DWORD v8[2]; // [rsp+8h] [rbp-50h] BYREF
  __int64 v9; // [rsp+10h] [rbp-48h]
  _QWORD v10[3]; // [rsp+18h] [rbp-40h] BYREF
  int v11; // [rsp+30h] [rbp-28h]

  <uucore::features::entries::Group as uucore::features::entries::Locate<&str>>::locate(v10);
  if ( !__OFSUB__(0LL, v10[0]) )
  {
    v6 = v11;
    core::ptr::drop_in_place<uucore::features::entries::Group>(v10);
    v8[1] = v6;
    v8[0] = 0;
    a1[1] = v6;
    goto LABEL_5;
  }
  v9 = v10[1];
  v8[0] = 1;
  v4 = core::num::<impl u32>::from_ascii_radix(a2, a3);
  v5 = 9;
  if ( (v4 & 1) == 0 )
  {
    a1[1] = HIDWORD(v4);
LABEL_5:
    v5 = 14;
  }
  *a1 = v5;
  return core::ptr::drop_in_place<core::result::Result<u32,std::io::error::Error>>(v8);
}