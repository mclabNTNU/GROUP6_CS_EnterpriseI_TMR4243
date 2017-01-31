%solve equation f=inv(B)*tau
syms f_vspx f_vspy f_bt tau_x tau_y tau_yaw l_bt l_vsp

%not needed, but present for reference
%f=[f_vspx f_vspy f_bt]';

tau=[tau_x; tau_y; tau_yaw];
B=[1 0 0; 0 1 1; 0 l_vsp l_bt]

Binv=inv(B);

fRHS=Binv*tau