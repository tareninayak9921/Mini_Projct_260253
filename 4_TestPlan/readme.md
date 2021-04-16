# TEST PLAN

## Table no - High level test plan

| **Test ID** | **Description**                                              | **Exp I/P** | **Exp O/P** | **Actual Out** | 
|-------------|--------------------------------------------------------------|-------------|-------------|----------------|
|  H_01       |Performing Arthmetic Calculation|arthmetic_calculator()|True|True|
|  H_02       |Performing Trigonometric Calculations|trignometric_calculator()|True|True|
|  H_03       |Performing Scientific Calculations |scientific_calculator()|True|True|

## Table no - Low level test plan

| **Test ID** | **Description**                                              |HL ID| **Exp IN** | **Exp OUT** | **Actual Out** |**Type Of Test**  |    
|-------------|--------------------------------------------------------------|-----|------------|-------------|------------------|------------------|
|  L_01       |Addition|H_01|(15,25)|40|40|Requirement based |
|  L_02       |Addition|H_01|(10*4,-20+5)|25|25|Scenario based|
|  L_03       |Subtraction |H_01|(15,5)|10|10|Requirement based |
|  L_04       |Multiplication |H_01|(12,12)|144|144|Requirement based |
|  L_05       |Multiplication|H_01|(-7,-5)|35|35|Scenario based|
|  L_06       |Multiplication|H_01|(159999,286666)|-126667|-126667|Boundary based|
|  L_07       |Division |H_01|(100,25)|4|4|Requirement based |
|  L_08       |Division|H_01|(500,50)|10|10|Boundary based|
|  L_09       |Distance|H_01|(10,10)|100|100|Boundary based|
|  L_10       |Distance|H_01|(4,2)|8|8|Requirment based|
|  L_11       |Percentage|H_01|(80,100)|80|80|Boundary based|
|  L_12       |Percentage|H_01|(1,100)|1|1|Requirment based|
|  L_13       |Speed|H_01|(100,4)|25|25|Requirment based|
|  L_14       |Speed|H_01|(90,3)|30|30|Requirment based|
|  L_15       |Log|H_02|(50)|1.69|1.69|Requirment based|
|  L_16       |squareRoot|H_02|(36)|6|6|Requirment based|
|  L_17       |squareRoot|H_02|(12*12)|12|12|Scenario based|
|  L_18       |squareRoot|H_02|(10000)|100|100|Boundary based|
|  L_19       |power|H_02|(4,2)|16|16|Requirment based|
|  L_20       |power|H_02|(1*1,3)|1|1|Boundary based|
|  L_21       |Sin|H_03|(4)|-0.757|-0.757|Requirment based|
|  L_22       |Cos|H_03|(4)|-0.654|-0.654|Requirment based|
|  L_23       |Tan|H_03|(4)|1.158|1.158|Requirment based|


