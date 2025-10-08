__int64 __fastcall sniffnet::chart::types::donut_chart::DonutChart::title(__int64 a1, __int64 a2)
{
  __int128 v2; // kr00_16

  v2 = *(_OWORD *)(a2 + 32) + *(_OWORD *)(a2 + 48);
  return sniffnet::networking::types::data_representation::DataRepr::formatted_string(
           a1,
           *(unsigned __int8 *)(a2 + 81),
           *(_QWORD *)(a2 + 64) + v2,
           (unsigned __int128)(*(_OWORD *)(a2 + 64) + v2) >> 64);
}