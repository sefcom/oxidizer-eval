__int64 __fastcall sniffnet::chart::types::traffic_chart::TrafficChart::series_label(__int64 a1, int a2)
{
  if ( a2 )
    return sniffnet::translations::translations::outgoing_translation();
  else
    return sniffnet::translations::translations::incoming_translation();
}