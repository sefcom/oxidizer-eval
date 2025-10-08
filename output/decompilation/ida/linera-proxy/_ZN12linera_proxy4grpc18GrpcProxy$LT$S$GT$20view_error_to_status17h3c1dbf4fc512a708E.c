__int64 __fastcall linera_proxy::grpc::GrpcProxy<S>::view_error_to_status(__int128 *a1)
{
  __int64 v1; // rax
  __int128 v2; // xmm0
  __int64 v3; // rax
  __int64 v5; // [rsp+8h] [rbp-50h] BYREF
  _QWORD v6[2]; // [rsp+10h] [rbp-48h] BYREF
  __int128 v7; // [rsp+20h] [rbp-38h]
  __int128 v8; // [rsp+30h] [rbp-28h]
  __int64 v9; // [rsp+40h] [rbp-18h]

  switch ( *(_BYTE *)a1 )
  {
    case 0:
      <T as alloc::string::SpecToString>::spec_to_string(v6, a1);
      v1 = tonic::status::Status::new(3LL, v6);
      break;
    case 1:
    case 8:
    case 0xA:
      <T as alloc::string::SpecToString>::spec_to_string(v6, a1);
      v1 = tonic::status::Status::new(5LL, v6);
      break;
    case 2:
    case 4:
    case 5:
    case 6:
    case 9:
    case 0xB:
      <T as alloc::string::SpecToString>::spec_to_string(v6, a1);
      v1 = tonic::status::Status::new(13LL, v6);
      break;
    case 3:
    case 7:
      <T as alloc::string::SpecToString>::spec_to_string(v6, a1);
      v1 = tonic::status::Status::new(11LL, v6);
      break;
  }
  v5 = v1;
  v9 = *((_QWORD *)a1 + 4);
  v2 = *a1;
  v8 = a1[1];
  v7 = v2;
  v6[0] = 1LL;
  v6[1] = 1LL;
  v3 = alloc::boxed::Box<T>::new(v6);
  tonic::status::Status::set_source(&v5, v3, &off_14A6BA8);
  return v5;
}