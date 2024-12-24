__int64 __fastcall uu_ls::get_security_context(__int64 a1, __int64 a2, __int64 a3, int a4)
{
  __int64 v6; // r12
  __int64 v7; // rdx
  __int64 result; // rax
  __int128 v9; // [rsp+0h] [rbp-188h] BYREF
  __int64 v10; // [rsp+10h] [rbp-178h]
  _QWORD v11[4]; // [rsp+18h] [rbp-170h] BYREF
  __int128 v12; // [rsp+38h] [rbp-150h] BYREF
  _QWORD *v13; // [rsp+48h] [rbp-140h]
  __int64 v14; // [rsp+50h] [rbp-138h]
  __int64 v15; // [rsp+58h] [rbp-130h]
  _QWORD v16[2]; // [rsp+68h] [rbp-120h] BYREF
  __int16 v17; // [rsp+78h] [rbp-110h] BYREF
  __int64 v18; // [rsp+80h] [rbp-108h]
  __int128 v19; // [rsp+88h] [rbp-100h]
  _QWORD *v20; // [rsp+98h] [rbp-F0h]
  int v21; // [rsp+B0h] [rbp-D8h] BYREF
  __int64 v22; // [rsp+B8h] [rbp-D0h]

  <T as alloc::slice::hack::ConvertVec>::to_vec(&v9, asc_3633A, 1LL);
  if ( a4 )
  {
    uu_ls::get_metadata_with_deref_opt((__int64)&v21, a2, a3, 1);
    if ( v21 == 2 )
    {
      v6 = v22;
      v11[0] = v22;
      std::path::Path::to_path_buf(&v12, a2, a3);
      v18 = v6;
      v19 = v12;
      v20 = v13;
      v17 = 2;
      uucore::mods::error::set_exit_code(1LL);
      v16[0] = uucore::util_name();
      v16[1] = v7;
      v11[0] = v16;
      v11[1] = <&T as core::fmt::Display>::fmt;
      v11[2] = &v17;
      v11[3] = <uu_ls::LsError as core::fmt::Display>::fmt;
      *(_QWORD *)&v12 = &unk_212798;
      *((_QWORD *)&v12 + 1) = 3LL;
      v15 = 0LL;
      v13 = v11;
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
