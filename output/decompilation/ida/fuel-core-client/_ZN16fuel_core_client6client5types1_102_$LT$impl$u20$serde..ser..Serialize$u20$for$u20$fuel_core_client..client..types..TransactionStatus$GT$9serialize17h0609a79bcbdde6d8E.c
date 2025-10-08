__int64 __fastcall fuel_core_client::client::types::_::<impl serde::ser::Serialize for fuel_core_client::client::types::TransactionStatus>::serialize(
        __int64 a1,
        __int64 a2)
{
  unsigned __int64 v2; // rcx
  const char *v3; // rcx
  __int64 v4; // r8
  __int64 v5; // r9
  __int64 v6; // rdx
  __int64 result; // rax

  v2 = 4LL;
  if ( (a2 ^ 0x8000000000000000LL) < 6 )
    v2 = a2 ^ 0x8000000000000000LL;
  switch ( v2 )
  {
    case 0uLL:
      v3 = aSubmitted;
      v4 = 9LL;
      v5 = 1LL;
      v6 = 0LL;
      break;
    case 1uLL:
      v3 = aSuccess;
      v4 = 7LL;
      v5 = 6LL;
      v6 = 1LL;
      break;
    case 2uLL:
      v3 = aPreconfirmatio_1;
      v4 = 22LL;
      v5 = 6LL;
      v6 = 2LL;
      break;
    case 3uLL:
      v3 = aSqueezedout;
      v4 = 11LL;
      v5 = 1LL;
      v6 = 3LL;
      break;
    case 4uLL:
      v3 = aFailure;
      v4 = 7LL;
      v5 = 7LL;
      v6 = 4LL;
      break;
    case 5uLL:
      v3 = aPreconfirmatio_2;
      v4 = 22LL;
      v5 = 7LL;
      v6 = 5LL;
      break;
  }
  result = <serde_json::value::ser::RawValueEmitter as serde::ser::Serializer>::serialize_struct_variant(
             aTransactionsta_0,
             17LL,
             v6,
             v3,
             v4,
             v5);
  *(_QWORD *)(a1 + 8) = result;
  *(_BYTE *)a1 = 6;
  return result;
}