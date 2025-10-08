__int64 __fastcall uu_chroot::supplemental_gids(_QWORD *a1)
{
  _OWORD v2[8]; // [rsp+0h] [rbp-108h] BYREF
  _OWORD v3[8]; // [rsp+80h] [rbp-88h] BYREF

  <uucore::features::entries::Passwd as uucore::features::entries::Locate<u32>>::locate(v2);
  if ( __OFSUB__(0LL, *(_QWORD *)&v2[0]) )
  {
    *a1 = 0LL;
    a1[1] = 4LL;
    a1[2] = 0LL;
    return core::ptr::drop_in_place<core::result::Result<uucore::features::entries::Passwd,std::io::error::Error>>(v2);
  }
  else
  {
    v3[7] = v2[7];
    v3[6] = v2[6];
    v3[5] = v2[5];
    v3[4] = v2[4];
    v3[3] = v2[3];
    v3[2] = v2[2];
    v3[1] = v2[1];
    v3[0] = v2[0];
    uucore::features::entries::Passwd::belongs_to(a1, v3);
    return core::ptr::drop_in_place<uucore::features::entries::Passwd>(v2);
  }
}