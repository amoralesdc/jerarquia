# Jerarquía simple

Clase base `Vehiculo` (marca, modelo, velocidadMax) con dos clases derivadas: `Auto`, con el atributo `numPuertas`, y `Motocicleta`, con el atributo `cilindrada`. Cada una sobrescribe el método `mostrarInfo()` para mostrar sus datos específicos.

## Compilar y ejecutar

```bash
g++ jerarquia.cpp -o jerarquia
./jerarquia
```

## Salida

```
[Auto]
Marca: Toyota
Modelo: Corolla
Velocidad maxima: 180 km/h
Puertas: 4

[Motocicleta]
Marca: Yamaha
Modelo: R6
Velocidad maxima: 260 km/h
Cilindrada: 600 cc
```
