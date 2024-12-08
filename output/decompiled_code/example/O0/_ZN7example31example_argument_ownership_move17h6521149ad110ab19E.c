__int64 __fastcall example::example_argument_ownership_move()
{
  __int128 v1; // [rsp+18h] [rbp-A0h] BYREF
  __int64 v2; // [rsp+28h] [rbp-90h]
  __int128 v3; // [rsp+30h] [rbp-88h] BYREF
  __int64 v4; // [rsp+40h] [rbp-78h]
  __int64 v5; // [rsp+48h] [rbp-70h]
  __int128 v6; // [rsp+50h] [rbp-68h] BYREF
  __int64 v7; // [rsp+60h] [rbp-58h]
  __int64 v8; // [rsp+68h] [rbp-50h]
  int v9[4]; // [rsp+70h] [rbp-48h] BYREF
  __int64 v10; // [rsp+80h] [rbp-38h]
  char v11; // [rsp+8Fh] [rbp-29h]
  _QWORD v12[3]; // [rsp+A0h] [rbp-18h] BYREF

  v11 = 1;
  <alloc::string::String as core::convert::From<&str>>::from(&v1, aNewName, 8LL);
  example::Person::new(&v6);
  if ( (_QWORD)v6 == 0x8000000000000000LL )
  {
    v12[0] = *((_QWORD *)&v6 + 1);
    core::result::unwrap_failed(aCalledResultUn, 43LL, v12, &off_5AF18, &off_5B040);
  }
  v3 = v6;
  v4 = v7;
  v5 = v8;
  v11 = 0;
  v10 = v2;
  *(_OWORD *)v9 = v1;
  example::Person::change_name(&v3, v9);
  return core::ptr::drop_in_place<example::Person>(&v3);
}
