__int64 __fastcall uu_groups::infallible_gid2grp(__int64 a1, unsigned int *a2)
{
  unsigned int v2; // ebp
  __int64 v3; // rbx
  __int64 v4; // rdx
  __int64 v5; // rax
  _QWORD *v6; // rcx
  unsigned __int64 v8; // [rsp+0h] [rbp-98h] BYREF
  __int64 v9; // [rsp+8h] [rbp-90h]
  __int128 v10; // [rsp+18h] [rbp-80h] BYREF
  _QWORD *v11; // [rsp+28h] [rbp-70h]
  __int64 v12; // [rsp+30h] [rbp-68h]
  __int64 v13; // [rsp+38h] [rbp-60h]
  _QWORD v14[4]; // [rsp+48h] [rbp-50h] BYREF
  _QWORD v15[6]; // [rsp+68h] [rbp-30h] BYREF

  v2 = *a2;
  <uucore::features::entries::Group as uucore::features::entries::Locate<u32>>::locate(&v10, *a2);
  v3 = *((_QWORD *)&v10 + 1);
  if ( __OFSUB__(-(__int64)v10, 1LL) )
  {
    LODWORD(v9) = v2;
    v8 = 0x8000000000000001LL;
    uucore::mods::error::set_exit_code(1LL);
    v15[0] = uucore::util_name();
    v15[1] = v4;
    v14[0] = v15;
    v14[1] = <&T as core::fmt::Display>::fmt;
    v14[2] = &v8;
    v14[3] = <uu_groups::GroupsError as core::fmt::Display>::fmt;
    *(_QWORD *)&v10 = &unk_E2138;
    *((_QWORD *)&v10 + 1) = 3LL;
    v13 = 0LL;
    v11 = v14;
    v12 = 2LL;
    std::io::stdio::_eprint(&v10);
    core::ptr::drop_in_place<uu_groups::GroupsError>(v8, v9);
    v5 = core::fmt::num::imp::<impl u32>::_fmt(v2, v14, 10LL);
    <T as alloc::slice::<impl [T]>::to_vec_in::ConvertVec>::to_vec(&v10, v5);
    *(_QWORD *)(a1 + 16) = v11;
    *(_OWORD *)a1 = v10;
    core::ptr::drop_in_place<core::result::Result<alloc::string::String,std::io::error::Error>>(
      0x8000000000000000LL,
      v3);
  }
  else
  {
    v6 = v11;
    *(_OWORD *)a1 = v10;
    *(_QWORD *)(a1 + 16) = v6;
  }
  return a1;
}