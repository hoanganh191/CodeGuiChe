package com.example.appviettour;

public class Tour {
    private String tour_id;
    private String name;
    private String description;
    private String location;
    private String region;
    private int price;
    private byte[] image_url;

    public Tour() {
    }

    public Tour(String tour_id, String name, String description,String location, String region, int price, byte[] image_url) {
        this.tour_id = tour_id;
        this.name = name;
        this.description = description;
        this.location = location;
        this.region = region;
        this.price = price;
        this.image_url = image_url;
    }

    public String getTour_id() {
        return tour_id;
    }

    public void setTour_id(String tour_id) {
        this.tour_id = tour_id;
    }

    public String getName() {
        return name;
    }

    public void setName(String name) {
        this.name = name;
    }

    public String getDescription() {
        return description;
    }

    public void setDescription(String description) {
        this.description = description;
    }

    public String getLocation() { return location;}

    public void setLocation(String location) {
        this.location = location;
    }

    public String getRegion() {
        return region;
    }

    public void setRegion(String region) {
        this.region = region;
    }

    public int getPrice() {
        return price;
    }

    public void setPrice(int price) {
        this.price = price;
    }

    public byte[] getImage_url() {
        return image_url;
    }

    public void setImage_url(byte[] image_url) {
        this.image_url = image_url;
    }
}
