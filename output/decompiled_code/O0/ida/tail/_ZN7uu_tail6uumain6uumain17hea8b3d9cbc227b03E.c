__int64 uu_tail::uumain::uumain()
{
  char v1; // [rsp+2Fh] [rbp-229h]
  __int64 v2; // [rsp+30h] [rbp-228h]
  _OWORD v3[5]; // [rsp+40h] [rbp-218h] BYREF
  __int128 v4; // [rsp+90h] [rbp-1C8h] BYREF
  __int128 v5; // [rsp+A0h] [rbp-1B8h]
  __int128 v6; // [rsp+B0h] [rbp-1A8h]
  __int128 v7; // [rsp+C0h] [rbp-198h]
  __int128 v8; // [rsp+D0h] [rbp-188h]
  int v9[20]; // [rsp+E0h] [rbp-178h] BYREF
  __int128 v10; // [rsp+130h] [rbp-128h]
  __int128 v11; // [rsp+140h] [rbp-118h]
  __int128 v12; // [rsp+150h] [rbp-108h]
  __int128 v13; // [rsp+160h] [rbp-F8h]
  __int128 v14; // [rsp+170h] [rbp-E8h]
  char v15; // [rsp+18Fh] [rbp-C9h]
  _QWORD v16[3]; // [rsp+190h] [rbp-C8h] BYREF
  _QWORD v17[3]; // [rsp+1A8h] [rbp-B0h] BYREF
  _BYTE v18[48]; // [rsp+1C0h] [rbp-98h] BYREF
  __int128 v19; // [rsp+1F0h] [rbp-68h] BYREF
  __int128 v20; // [rsp+208h] [rbp-50h]
  _BYTE v21[48]; // [rsp+218h] [rbp-40h] BYREF
  _BYTE *v22; // [rsp+248h] [rbp-10h]
  __int64 (__fastcall *v23)(); // [rsp+250h] [rbp-8h]

  uu_tail::args::parse_args(v9);
  <core::result::Result<T,E> as core::ops::try_trait::Try>::branch(&v4, v9);
  if ( (_QWORD)v4 == 5LL )
    return <core::result::Result<T,F> as core::ops::try_trait::FromResidual<core::result::Result<core::convert::Infallible,E>>>::from_residual(
             *((_QWORD *)&v4 + 1),
             v5,
             &off_186A00);
  v14 = v8;
  v13 = v7;
  v12 = v6;
  v11 = v5;
  v10 = v4;
  v3[4] = v8;
  v3[3] = v7;
  v3[2] = v6;
  v3[1] = v5;
  v3[0] = v4;
  uu_tail::args::Settings::check_warnings(v3);
  v1 = uu_tail::args::Settings::verify(v3);
  v15 = v1;
  if ( v1 )
  {
    if ( v1 == 1LL )
    {
      <str as os_display::native::Quotable>::quote(v21, asc_22818, 1LL);
      v22 = v21;
      v23 = <os_display::Quoted as core::fmt::Display>::fmt;
      *(_QWORD *)&v20 = v21;
      *((_QWORD *)&v20 + 1) = <os_display::Quoted as core::fmt::Display>::fmt;
      v19 = v20;
      core::fmt::Arguments::new_v1(v18, &off_1869E0, &v19);
      alloc::fmt::format(v17, v18);
      v16[0] = v17[0];
      v16[1] = v17[1];
      v16[2] = v17[2];
      v2 = uucore::mods::error::USimpleError::new(1LL, v16);
    }
    else
    {
      v2 = 0LL;
    }
    core::ptr::drop_in_place<uu_tail::args::Settings>(v3);
  }
  else
  {
    v2 = uu_tail::uu_tail(v3);
    core::ptr::drop_in_place<uu_tail::args::Settings>(v3);
  }
  return v2;
}
