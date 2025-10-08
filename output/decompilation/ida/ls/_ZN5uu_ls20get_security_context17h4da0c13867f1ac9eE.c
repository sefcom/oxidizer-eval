__int64 __fastcall uu_ls::get_security_context(__int64 a1, __int64 a2, __int64 a3, int a4)
{
  __int64 v6; // r12
  __int64 v7; // rdx
  __int64 result; // rax
  __int128 v9; // [rsp+0h] [rbp-188h] BYREF
  __int64 v10; // [rsp+10h] [rbp-178h]
  __int64 v11; // [rsp+18h] [rbp-170h]
  __int128 v12; // [rsp+20h] [rbp-168h] BYREF
  _QWORD *v13; // [rsp+30h] [rbp-158h]
  __int64 v14; // [rsp+38h] [rbp-150h]
  __int64 v15; // [rsp+40h] [rbp-148h]
  _QWORD v16[2]; // [rsp+50h] [rbp-138h] BYREF
  unsigned __int64 v17; // [rsp+60h] [rbp-128h] BYREF
  __int128 v18; // [rsp+68h] [rbp-120h]
  _QWORD *v19; // [rsp+78h] [rbp-110h]
  __int64 v20; // [rsp+80h] [rbp-108h]
  char v21; // [rsp+88h] [rbp-100h]
  _QWORD v22[4]; // [rsp+90h] [rbp-F8h] BYREF
  int v23; // [rsp+B0h] [rbp-D8h] BYREF
  __int64 v24; // [rsp+B8h] [rbp-D0h]

  <T as alloc::slice::<impl [T]>::to_vec_in::ConvertVec>::to_vec(&v9, asc_D4206, 1LL);
  if ( a4 )
  {
    uu_ls::get_metadata_with_deref_opt(&v23, a2, a3, 1);
    if ( v23 == 2 )
    {
      v6 = v24;
      v11 = v24;
      std::path::Path::to_path_buf(&v12, a2, a3);
      v19 = v13;
      v18 = v12;
      v20 = v6;
      v21 = 0;
      v17 = 0x8000000000000002LL;
      uucore::mods::error::set_exit_code(1LL);
      v16[0] = uucore::util_name();
      v16[1] = v7;
      v22[0] = v16;
      v22[1] = <&T as core::fmt::Display>::fmt;
      v22[2] = &v17;
      v22[3] = <uu_ls::LsError as core::fmt::Display>::fmt;
      *(_QWORD *)&v12 = &unk_286B10;
      *((_QWORD *)&v12 + 1) = 3LL;
      v15 = 0LL;
      v13 = v22;
      v14 = 2LL;
      std::io::stdio::_eprint(&v12);
      core::ptr::drop_in_place<uu_ls::LsError>(&v17);
    }
  }
  result = v10;
  *(_QWORD *)(a1 + 16) = v10;
  *(_OWORD *)a1 = v9;
  return result;
}