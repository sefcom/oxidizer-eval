__int64 __fastcall fuel_core_client::client::FuelClient::new(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // rax

  v3 = <&T as core::convert::AsRef<U>>::as_ref(a2, a3);
  return <fuel_core_client::client::FuelClient as core::str::traits::FromStr>::from_str(a1, v3);
}